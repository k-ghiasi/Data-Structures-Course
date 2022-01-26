package ac.um.ds.TwoStackExpressionEvaluation;

public class SinFunc extends MathFunction
{
	public SinFunc()
	{
		super("sin");
	}
	@Override
	public double evaluate(double v, double dummy)
	{
		return Math.sin(v);
	}
}