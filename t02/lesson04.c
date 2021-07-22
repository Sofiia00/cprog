#include <stdio.h>
#include <math.h>

int main(void){
	int a, b, r;
	a = 2;
	b = 3;
	r = (a + 4*b) * (a - 3*b) + pow(a,2);
	printf("result = %d\n", r);

	return 0;
}
