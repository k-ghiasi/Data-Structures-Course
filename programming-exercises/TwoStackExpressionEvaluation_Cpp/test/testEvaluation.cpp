#include "../src/ExpressionEvaluator.h"
#include <string>
#include <iostream>
using namespace std;

int main()
{
	unsigned int i,j;
	ExpressionEvaluator ee;
	double evaluatedResult;
	map<string, double> vv;
	vv["x"]=1;
	vv["y"]=2;
	vv["z"]=3;
	string  testCase[] = {"-(-sin(-x))^(-10*x)","(z-x)-(y-(z-1)^(4-x))^(y-z)","sin(cos(x+exp(x-z))+ln(x))","(7-x-5)/z/y*z*x+7+8-9","7^z^y^2/6^z^4^x"};
	double result[] = {5.61835,2.16,0.40,6.50,264661};
	int res = 0;
	for(j=0 ; j<5 ; j++){
		evaluatedResult = ee.evaluateExpression(testCase[j],vv);
		if(fabs(evaluatedResult - result[j]) < 0.01)
			res += 20;
		cout << "Evaluated: "<<evaluatedResult << endl<<"Answer: "<<result[j]<<endl<<"Score: "<<res<<endl;
	}
	cin>>i;

	return 0;
}
