#include "X.h"

X::X(const X& x){
	this->value = x.value;
}
X::X(int val){
	this->value = val;
}
X::X(){}
X::~X(){}


X& X::operator=(const X& right) {
	this->value = right.value;
	return (*this);
}

X::operator double() const
{
	return (double)value;
}

int X::getValue() const{
	return this->value;
}
