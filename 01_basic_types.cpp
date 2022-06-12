#include <iostream>

int main(){
	char a;
	unsigned char b;
	int c;
	long d;
	long double e;
	float f;

	const int g = 5;

	int tab1[30];
	char tab2[10];

	struct PointInR2
	{
		float x;
		float y;
	};

	PointInR2 test_point;
	test_point.x = 12.0;
	test_point.y = 24.0;

	int *h;
	char i;
	char *j = &i;
	char& k = i;
	char &l = i;

	return 0;
}