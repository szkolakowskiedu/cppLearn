#include <iostream>

int main(){
	int a, b, c, d;
	a = b = c = d = 7;
	int x = (a=3)+(b=c*d);
	std::cout<<x;
	return 0;
}