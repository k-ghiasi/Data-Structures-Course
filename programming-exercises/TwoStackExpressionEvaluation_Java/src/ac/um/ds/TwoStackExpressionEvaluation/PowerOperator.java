package ac.um.ds.TwoStackExpressionEvaluation;

public class PowerOperator extends Operator
{
	public PowerOperator()
	{
		super("^", ***, ***, false);
	}
	@Override
	public double evaluate(double v1, double v2)
	{
		return Math.pow(v1,v2);
	}
}