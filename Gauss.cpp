#include <iostream>
#include <stdio.h>
using namespace std;
int main(){
	int i, j;
	float a, b, x, y, z, l, d, r, t, T, A;
	float k = 8987551787.3681764;
	
	printf("length of the cube?(default 10)\n");
	scanf("%f\n", &a);
	
	if(a>0)
		l = a/2;
	else
		a = 10;
		l = a/2;
	
	printf("calculated distance?(default length twentieth)\n");
	scanf("%f\n", &b);
	
	if(a>b>0)
		d = b/2;						// ¶¡¶Z / 2
	else
		d = a/40;
	
	r = 2*a/d;							// ¦¸¼Æ 
	x = y = -l+d;
	z = l;
	T = 0;
	
	for ( i=0; i<r; i++){
		for ( j=0; j<r; j++){
			t = 1/(x*x + y*y + z*z);
			T = T + t;
			x = x + 2*d;
		}
		t = 1/(x*x + y*y + z*z);
		T = T + t;
		y = y + 2*d;
		j = 0;
	}
	A = 6*k*1*T*a*a;						// 6*kQ*A^2/r^2
	printf("%f\n", A);
	return 0;
}
