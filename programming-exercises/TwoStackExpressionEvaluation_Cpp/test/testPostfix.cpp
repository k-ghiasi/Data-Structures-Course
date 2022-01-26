#include "../src/ExpressionEvaluator.h"
#include <string>
#include <iostream>

using namespace std;

int main()
{
	unsigned int i;
	ExpressionEvaluator ee;
	vector<Token*> vtInfix, vtPostfix;
	string tokenizedPostfixString;
	string  testCase[] = {"-(-sin(-x))^(-10-x)","(z-x)-(y-(z-1)^(4-x))^(y-z)","sin(cos(x+exp(x-z))+ln(x))","(7-x-5)/z/y*z*x+7+8-9","7^z^y^2/z^x^3"};
	string tokenized[] = {" x _ sin _ _ 10 _ x - ^"," z x - y z 1 - 4 x - ^ - y z - ^ -"," x x z - exp + cos x ln + sin"," 7 x - 5 - z / y / z * x * 7 + 8 + 9 -"," 7 z y 2 ^ ^ ^ z x 3 ^ ^ /"};
	for(i=0 ; i<5 ; i++){
		ee.tokenizeString(testCase[i], vtInfix);
		ee.infix2Postfix(vtInfix, vtPostfix);
		tokenizedPostfixString = ee.tokenSeq2String(vtPostfix);
		cout <<"Expression: "<<testCase[i]<<endl
			<<"Evaluated Postfix: "<<tokenizedPostfixString<<endl
			<<"Correct Answer: "<<tokenized[i]<<endl;
		if(tokenizedPostfixString == tokenized[i])
			cout<<"True"<<endl<<endl;
		else
			cout<<"False"<<endl<<endl;
		vtInfix.clear();
		vtPostfix.clear();
	}

	cin>>i;	

	return 0;
}
