package ac.um.ds.TwoStackExpressionEvaluation;

// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2014 (1393 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi


public abstract class Operator extends Token
{
	public enum Associativity
	{
		ASSOC_LEFT,
		ASSOC_RIGHT;
	}
	public final String mName;
	public final int mPrecedence;
	public final Associativity mAssociativity;
	public final boolean mIsUnary;

	public Operator(String name, int precedence, Associativity associativity, boolean isUnitary)
	{
		this(name, precedence, associativity, isUnitary,Token.Type. OPERATOR);
	}
	public Operator(String name, int precedence, Associativity associativity, boolean isUnitary, Token.Type type)
	{
		super(type);
		this.mName = name;
		this.mPrecedence = precedence;
		this.mAssociativity = associativity;
		this.mIsUnary = isUnitary;
	}

	public abstract double evaluate(double v1, double v2);

	@Override
	public String toText()
	{
		return mName;
	}
}