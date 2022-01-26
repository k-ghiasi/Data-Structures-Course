package ac.um.ds.TwoStackExpressionEvaluation;


public abstract class Token {
    
	public enum Type
	{
		NUMERIC_CONST,
		VARIABLE,
		OPERATOR,
		FUNCTION,
		DELIMETER;
	}
	public final Type mType;
	public Token(Type type)
	{
		this.mType = type;
	}

	public abstract String toText();
}
