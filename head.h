#pragma once
#ifndef head__
#define head__
#include <string>
#include <iterator>
using namespace std;
template <class T>
bool make2darry(T**& x, const int &numofrows, const int* &rowsize)
{
	x = new T * [numofrows];
	for (int i = 0; i < numofrows; ++i) {
		x[i] = new T[rowsize[i]];
	}
}

class illegalParameterValue {
public:
	illegalParameterValue():message("wrong!"){}
	illegalParameterValue(const char* msg):message(msg){}
	void outputMessage() { cout << message << endl; }
private:
	string message;
};

int abc(int a, int b, int c)
{
	if (a < 1)
		throw illegalParameterValue("a shoudle be <1");
	return a + b * c;
}
template<class T>
void pai(T *list, int k, int m) {
	if (k == m) {
		for (int i = 0; i < m; ++i) {
			cout << list[i] << " ";
		}
		cout<<list[m] << endl;
	}
	else
	{
		for (int i = k; i < m; ++i)
		{
			swap(list[i], list[k]);
			pai(list, k + 1, m);
			swap(list[i], list[k]);
		}
	}
}

int Factorial(int num) {
	int Fac = 1;
	while (num != 1) {
		Fac *= num;
		--num;
	}
	return Fac;
}

#endif