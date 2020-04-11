#pragma once
int abc(int a, int b, int c)
{
	if (a < 0 && b < 0 && c < 0)
		throw 1;
	if (a == 0 && b == 0 & c == 0)
		throw 2;
	return a + b * c;
}