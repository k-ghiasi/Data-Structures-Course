#pragma once

template <class T>
class ISort{
public:
	virtual void Sort (T* data, int n) = 0;
};
