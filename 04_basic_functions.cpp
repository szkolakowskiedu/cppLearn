#include <iostream>

int func1(int b); // prototyp

int func2(int c){return 2*c;}

void testValues(){
	int c = 0;
	static int callCount = 0;
	c++; callCount++;
}

int main(){
	int a,b=3,c=5;
	a = func1(b)+func2(c)+3;
	return 0;

	testValues();
	testValues();
	// at this point callCount = 2, c = 0
}

int func1(int b){return b;} // definicja