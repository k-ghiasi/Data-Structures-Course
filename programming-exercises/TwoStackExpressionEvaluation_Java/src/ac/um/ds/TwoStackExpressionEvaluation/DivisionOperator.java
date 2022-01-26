package ac.um.ds.TwoStackExpressionEvaluation;

public class DivisionOperator extends Operator
{
	public DivisionOperator()
	{
		super("/", ***, ***, false);
	}
	@Override
	public double evaluate(double v1, double v2)
	{
		return v1 / v2;
	}
}