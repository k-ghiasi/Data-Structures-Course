package ac.um.ds.TwoStackExpressionEvaluation;

public class ExpFunc extends MathFunction
{
	public ExpFunc()
	{
		super("exp");
	}
	@Override
	public double evaluate(double v, double dummy)
	{
		return Math.exp(v);
	}
}