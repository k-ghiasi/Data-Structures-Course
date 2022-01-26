package ac.um.ds.TwoStackExpressionEvaluation;

public class MultiplicationOperator extends Operator
{
	public MultiplicationOperator()
	{
		super("*", ***, ***, false);
	}
	@Override
	public double evaluate(double v1, double v2)
	{
		return v1 * v2;
	}
}