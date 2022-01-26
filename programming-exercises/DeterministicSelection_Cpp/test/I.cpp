#include "I.h"

int I::counter = 0;
I::I(const I& I){
	++counter;
	this->value = I.value;
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
	++counter;
	this->value = right.value;
	return (*this);
}

I::operator double() const
{
	return (double)value;
}

int I::getCounter(){
	return counter;
}

int I::getValue() const{
	return this->value;
}
