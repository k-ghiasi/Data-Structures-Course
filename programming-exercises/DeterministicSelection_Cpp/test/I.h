#pragma once

class I{
private:
	int value;

public:
	static int counter;

public:
	I(const I& I);
	I(int val);
	I();
	~I();

	bool operator>(const I& right) const;
	bool operator<(const I& right) const;
	bool operator>=(const I& right) const;
	bool operator<=(const I& right) const;
	bool operator==(const I& right) const;
	bool operator!=(const I& right) const;
	I& operator=(const I& right);
	operator double() const;

	static int getCounter();
	int getValue() const;
};
