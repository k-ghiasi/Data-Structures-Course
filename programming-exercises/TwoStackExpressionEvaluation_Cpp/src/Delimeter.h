// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "Token.h"

class Delimeter: public Token
{
public: 
	const char mMark;

	Delimeter(char mark):Token(DELIMETER), mMark(mark){};

	virtual string toText()
	{
		string s;
		s.push_back(mMark);
	    return s;
	}
};

class LeftParanthesis: public Delimeter
{
public: 
	LeftParanthesis():Delimeter('('){};
};

class RightParanthesis: public Delimeter
{
public: 
	RightParanthesis():Delimeter(')'){};
};
