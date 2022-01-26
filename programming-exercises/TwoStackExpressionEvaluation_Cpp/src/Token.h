// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include <string>
#include <sstream>
using namespace std;


class Token{
public:
	enum Type {NUMERIC_CONST, VARIABLE, OPERATOR, FUNCTION, DELIMETER};
	const enum Type mType;
	Token(Type type):mType (type){};

	virtual string toText () = 0;
};

class NumericConstant: public Token{
public:
	NumericConstant(double value):mValue(value), Token(NUMERIC_CONST){};
	const double	mValue;

	virtual string toText()
	{
		ostringstream ss;
	    ss << mValue;
	    return ss.str();
	}
};

class VariableName: public Token{
public:
	const string	mName;

	VariableName(const string& name):mName(name), Token(VARIABLE){};

	virtual string toText()
	{
		return mName;
	}

};
