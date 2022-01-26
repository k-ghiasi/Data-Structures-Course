#pragma once

class X{
private:
	int value;

public:
	X(const X& x);
	X(int val);
	X();
	~X();

	X& operator=(const X& right);
	operator double() const;
	int getValue() const;
};
