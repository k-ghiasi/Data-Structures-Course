#include "I.h"

int I::counter = 0;
I::I(const I& i){
	this->value = i.value;
}
I::I(int val){
	this->value = val + 100;
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
	++counter;
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
