// Copyright (C) Kamaledin Ghiasi-Shirazi, Ferdowsi Univerity of Mashhad
//
// Author: Kamaledin Ghiasi-Shirazi

#pragma once
#include "Token.h"

class MathFunction : public Operator{
public:
	MathFunction(const string& name): Operator(name, ***, ***, true, FUNCTION){}
};


class  SinFunc: public MathFunction{
public:
	SinFunc(): MathFunction ("sin"){};
	virtual double evaluate (double v, double dummy) {return sin(v);};
};


class  CosFunc: public MathFunction{
public:
	CosFunc(): MathFunction ("cos"){};
	virtual double evaluate (double v, double dummy) {return cos(v);};
};


class  ExpFunc: public MathFunction{
public:
	ExpFunc(): MathFunction ("exp"){};
	virtual double evaluate (double v, double dummy) {return exp(v);};
};


class  LnFunc: public MathFunction{
public:
	LnFunc(): MathFunction ("ln"){};
	virtual double evaluate (double v, double dummy) {return log(v);};
};

