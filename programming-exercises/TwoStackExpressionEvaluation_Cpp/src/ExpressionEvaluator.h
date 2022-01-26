// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "Operator.h"
#include <map>
#include <vector>
#include <string>

using namespace std;


class ExpressionEvaluator
{
public:
	virtual double	evaluateExpression(string s, map<string, double> variableValues);
	virtual string	infix2Postfix(string s);

//private:
	virtual void	tokenizeString(string s, vector<Token*>& out);
	virtual string	tokenSeq2String(const vector<Token*>& vt);
	virtual double  evaluatePostfixExpression(vector<Token*> s, map<string, double> variableValues);
	virtual void 	infix2Postfix(const vector<Token*>& infixExpression, vector<Token*>& postfixExpression);
	virtual Token*	getNextToken(stringstream& ss, Token* lastToken);
};


