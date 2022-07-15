#include <iostream>

int func1(int b){
	return b;
}

int func2(int c){
	return 2*c;
}

int main(){
	int a,b=3,c=5;
	a = func1(b)+func2(c)+3;
	return 0;
}