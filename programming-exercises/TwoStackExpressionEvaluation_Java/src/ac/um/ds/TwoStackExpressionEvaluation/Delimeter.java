package ac.um.ds.TwoStackExpressionEvaluation;

// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad, 2014 (1393 Hijri Shamsi)
//
// Author: Kamaledin Ghiasi-Shirazi


public class Delimeter extends Token
{
	public final char mMark;

	public Delimeter(char mark)
	{
		super(Token.Type.DELIMETER);
		this.mMark = mark;
	}

	@Override
	public String toText()//مقایسه با کد اصلی
	{
		String s = "";
		s = s + mMark;
		return s;
	}
}
