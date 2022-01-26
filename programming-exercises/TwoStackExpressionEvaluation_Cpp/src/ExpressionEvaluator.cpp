// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#include "ExpressionEvaluator.h"
#include "Delimeter.h"
#include "MathFunction.h"
#include <stack>
#include <vector>
using namespace std;

void ExpressionEvaluator::infix2Postfix(const vector<Token*>& infixExpression, vector<Token*>& postfixExpression)
{
	// Write your code here
}



double  ExpressionEvaluator::evaluatePostfixExpression(vector<Token*> s, map<string, double> variableValues)
{
	// Write your code here
}


double ExpressionEvaluator::evaluateExpression(string s, map<string, double> variableValues)
{
	double val;
	vector<Token*> inTokens, postTokens;
	tokenizeString (s, inTokens);
	infix2Postfix (inTokens, postTokens);
	val = evaluatePostfixExpression (postTokens, variableValues);
	// postTokens are a rearrangement of inTokens. So, we don't delete them
	for (unsigned int i=0; i < inTokens.size(); i++)
		delete inTokens[i];

	return val;
}

string ExpressionEvaluator::infix2Postfix(string s)
{
	unsigned int i;
	string out;
	vector<Token*> inTokens, postTokens;
	tokenizeString (s, inTokens);
	infix2Postfix (inTokens, postTokens);
	out = tokenSeq2String (postTokens);

	// postTokens are a rearrangement of inTokens. So, we don't delete them
	for (i=0; i < inTokens.size(); i++)
		delete inTokens[i];

	return out;
}

string ExpressionEvaluator::tokenSeq2String(const vector<Token*>& vt)
{
	unsigned int i;
	string s;
	for (i=0; i < vt.size();i++)
	{
		s += ' ';
		s += vt[i]->toText();
	}
	return s;
}


void ExpressionEvaluator::tokenizeString(string s, vector<Token*>& out)
{
	unsigned int i;
	stringstream ss;

	for (i=0; i < s.size(); i++)
		s[i] = tolower(s[i]);
	s.push_back(EOF);
	ss << s;
	Token *token = NULL;

	token = getNextToken(ss,token);
	while (token)
	{
		out.push_back(token);
		token = getNextToken(ss,token);
	}
}

Token* ExpressionEvaluator::getNextToken(stringstream& ss, Token* lastToken)
{
	int state=0;
	Operator*	op;
	string tokenStr;
	char ch = ' ';
	bool dotIsSeen;
	while (1)
	{
		ss.read(&ch,1);
		switch (state)
		{
		// Initial State
		case 0:
			if (ch<='9' && ch>='0'){	tokenStr+=ch; state=1; dotIsSeen=false; break;}

			if ((ch<=(unsigned char)'z' && ch>=(unsigned char)'a')||
				(ch<=(unsigned char)'Z' && ch>=(unsigned char)'A')/*||
																  (ch==(unsigned char)'_')*/)
			{	tokenStr+=ch;	 state=2;break;}
			else
			{
				switch (ch)
				{
				case '(':return new LeftParanthesis();
				case ')':return new RightParanthesis();
				case '^':return new PowerOperator();
				case '+':return new PlusOperator();
				case '*':return new MultiplicationOperator();
				case '/':return new DivisionOperator();
				case '-':
					if (lastToken == NULL || dynamic_cast<LeftParanthesis*>(lastToken)
						|| (op=dynamic_cast<Operator*>(lastToken) /*&& op->mIsUnary*/))
						return new UnaryMinusOperator();
					else
						return new MinusOperator();
				case '.':state=1;  dotIsSeen=true; break;
				case EOF:	return NULL;
				case 10:
				case 13:
				case 32:
				case (int)('\t'):
					break;
				default:
					{
						char buff[30]="UnAllowed character No:     ";
						buff[25]='0'+ch/100;	buff[26]='0'+(ch%100)/10;	buff[27]='0'+ch%10;	buff[28]=0;
						throw std::runtime_error(buff);
					}
				}
			}
			break;

		// Number
		case 1:
			if (ch == '.')
			{
				if (dotIsSeen)
					throw (std::runtime_error("Numeric string with two dots!"));
				else
				{
					dotIsSeen = true;
				}

			}
			else if (ch>'9' || ch<'0')
			{
				double val;
				ss.putback (ch);
				val = atof (tokenStr.c_str());
				return new NumericConstant (val);
			}

			tokenStr+=ch;
			break;

		// String
		case 2:
			if ((ch<=(unsigned char)'z' && ch>=(unsigned char)'a')
				||(ch<=(unsigned char)'Z' && ch>=(unsigned char)'A')
				/*|| (ch=='_')*/||(ch<='9' && ch>='0'))
			{	tokenStr+=ch; }
			else
			{
				ss.putback (ch);

				if (tokenStr == "sin")
					return new SinFunc();
				else if (tokenStr == "cos")
					return new CosFunc();
				else if (tokenStr == "exp")
					return new ExpFunc();
				else if (tokenStr == "ln")
					return new LnFunc();
				else
					return new VariableName (tokenStr);
			}
			break;
		}
	}
}

