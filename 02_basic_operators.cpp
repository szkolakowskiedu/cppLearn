#include <iostream>

int main(){
	int a, b, c, d;
	a = b = c = d = 7;
	int x = (a=3)+(b=c*d);
	// znak rownosci jest operatorem z priorytetem prawostronnym
	// x = 52

	int i = 10, j = 10;
	a = i++; // a = 10, i = 11
	b = j++; // b = 11, j = 11

	i = j = 1;
	(i==1 ? a=20 : a=30); // a = 20

	return 0;
}