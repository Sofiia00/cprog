#include <stdio.h>
#include <math.h>

int main(void){
	double x, r;
	x = -2.34;
	r = ((fabs(x-5)-sin(x))/3)+(sqrt(pow(x,2)+2014)*cos(2*x))-3;
	printf("result = %.5f\n", r);
	return 0;
}
