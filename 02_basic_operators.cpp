#include <iostream>

int main(){
	int a, b, c, d;
	a = b = c = d = 7;
	int x = (a=3)+(b=c*d);
	std::cout<<x;
	return 0;

	int i = 10, j = 10;
	a = i++; // a = 10, i = 11
	b = j++; // b = 11, j = 11
}