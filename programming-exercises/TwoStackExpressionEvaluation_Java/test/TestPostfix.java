package test;

import ac.um.ds.TwoStackExpressionEvaluation.ExpressionEvaluator;
import ac.um.ds.TwoStackExpressionEvaluation.Token;
import java.util.Vector;

public class TestPostfix {
	public static void main(String[] args) throws Exception {

		ExpressionEvaluator ee = new ExpressionEvaluator();
		Vector<Token> vtInfix = new Vector<Token>();
		Vector<Token> vtPostfix = new Vector<Token>();
		String tokenizedPostfixString;
		String[] testCases = {"-(-sin(-x))^(-10-x)","(z-x)-(y-(z-1)^(4-x))^(y-z)","sin(cos(x+exp(x-z))+ln(x))","(7-x-5)/z/y*z*x+7+8-9","7^z^y^2/z^x^3"};
		String[] tokenized = {" x _ sin _ _ 10.0 _ x - ^"," z x - y z 1.0 - 4.0 x - ^ - y z - ^ -"," x x z - exp + cos x ln + sin"," 7.0 x - 5.0 - z / y / z * x * 7.0 + 8.0 + 9.0 -"," 7.0 z y 2.0 ^ ^ ^ z x 3.0 ^ ^ /"};

		for (int i=0; i<5; i++) {
			ee.tokenizeString(testCases[i], vtInfix);
			ee.infix2Postfix(vtInfix, vtPostfix);
			tokenizedPostfixString = ee.tokenSeq2String(vtPostfix);

			System.out.println("Expression: " + testCases[i]);
			System.out.println("Evaluated Postfix: " + tokenizedPostfixString);
			System.out.println("Correct Answer: " + tokenized[i]);

			if (tokenizedPostfixString.equals(tokenized[i])) {
				System.out.println("True\n");
			} else {
				System.out.println("False\n");
			}
			vtInfix.clear();
			vtPostfix.clear();
		}
	}
}
