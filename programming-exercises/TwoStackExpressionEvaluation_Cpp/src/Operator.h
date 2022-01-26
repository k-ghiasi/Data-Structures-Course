// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "Token.h"

class Operator : public Token{
public:
	enum Associativity {ASSOC_LEFT, ASSOC_RIGHT};
	const string mName;
	const int  mPrecedence;
	const Associativity  mAssociativity;
	const bool  mIsUnary;

	Operator (string name, int precedence, Associativity associativity, bool isUnitary, Token::Type type=OPERATOR)
		:Token(type), mName(name), mPrecedence(precedence), mAssociativity(associativity), mIsUnary(isUnitary){};

	virtual double evaluate (double v1, double v2) = 0;

	virtual string toText()
	{
	    return mName;
	}
};

class UnaryMinusOperator : public Operator{
public:
	UnaryMinusOperator():Operator("_", ***, ***, true){};
	virtual double evaluate (double v1, double v2) {return -v1;};
};

class PowerOperator : public Operator{
public:
	PowerOperator():Operator("^", ***, ***, false){};
	virtual double evaluate (double v1, double v2) {return pow(v1,v2);};
};


class MultiplicationOperator : public Operator{
public:
	MultiplicationOperator():Operator("*", ***, ***, false){};
	virtual double evaluate (double v1, double v2) {return v1*v2;};
};

class DivisionOperator : public Operator{
public:
	DivisionOperator():Operator("/", ***, ***, false){};
	virtual double evaluate (double v1, double v2) {return v1/v2;};
};

class PlusOperator : public Operator{
public:
	PlusOperator():Operator("+", ***, ***, false){};
	virtual double evaluate (double v1, double v2) {return v1+v2;};
};

class MinusOperator : public Operator{
public:
	MinusOperator():Operator("-", ***, ***, false){};
	virtual double evaluate (double v1, double v2) {return v1-v2;};
};


