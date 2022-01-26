#include "I.h"

I::I(const I& i){
	this->value = i.value;
}
I::I(int val){
	this->value = val;
}
I::I(){}
I::~I(){}

bool I::operator>(const I& right) const{
	return (value > right.value);
}

bool I::operator<(const I& right) const{
	return (value < right.value);
}

bool I::operator>=(const I& right) const{
	return (value >= right.value);
}

bool I::operator<=(const I& right) const{
	return (value <= right.value);
}

bool I::operator==(const I& right) const{
	return (value == right.value);
}

bool I::operator!=(const I& right) const{
	return (value != right.value);
}

I& I::operator=(const I& right) {
	this->value = right.value;
	return (*this);
}

I::operator double() const
{
	return (double)value;
}

int I::getValue() const{
	return this->value;
}
