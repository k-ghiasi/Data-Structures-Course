#pragma once
class IntegerKey{
public:
	int key;

	IntegerKey(const IntegerKey& x){
		this->key = x.key;
	}

	IntegerKey(int val){
		this->key = val;
	}

	IntegerKey(){}
	~IntegerKey(){}

	int getKey() const{
		return this->key;
	}

	bool operator>(const IntegerKey& right) const{
		return (key > right.key);
	}

	bool operator<(const IntegerKey& right) const{
		return (key < right.key);
	}

	bool operator>=(const IntegerKey& right) const{
		return (key >= right.key);
	}

	bool operator<=(const IntegerKey& right) const{
		return (key <= right.key);
	}

	bool operator==(const IntegerKey& right) const{
		return (key == right.key);
	}

	bool operator!=(const IntegerKey& right) const{
		return (key != right.key);
	}

	IntegerKey& operator=(const IntegerKey& right){
		this->key = right.key;
		return (*this);
	}

	operator double() const{
		return (double)key;
	}
};
