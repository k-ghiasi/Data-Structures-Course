package test;

import ac.um.ds.TwoStackExpressionEvaluation.ExpressionEvaluator;
import java.util.HashMap;

public class TestEvaluation {
	public static void main(String[] args) throws Exception {

		ExpressionEvaluator ee = new ExpressionEvaluator();
		double evaluatedResult;
		HashMap<String, Double> vv = new HashMap<String, Double>();
		vv.put("x", (double) 1);
		vv.put("y", (double) 2);
		vv.put("z", (double) 3);
		vv.put("pi", 3.1415926535897932384626433832795);
		String[] testCases = {"-(-sin(-x))^(-10*x)","(z-x)-(y-(z-1)^(4-x))^(y-z)","sin(cos(x+exp(x-z))+ln(x))","(7-x-5)/z/y*z*x+7+8-9","7^z^y^2/6^z^4^x"};
		double[] result = {5.61835,2.16,0.40,6.50,264661};

		int res = 0;
		for (int i=0; i<5; i++) {
			evaluatedResult = ee.evaluateExpression(testCases[i], new HashMap(vv));

			if (Math.abs(evaluatedResult - result[i]) < 0.01)
				res += 20;

			System.out.println("Evaluated: " + evaluatedResult);
			System.out.println("Answer: " + result[i]);
			System.out.println("Score: " + res);
			System.out.println();
		}
	}

}
