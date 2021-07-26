#include <stdio.h>
#include <math.h>

int main(void){
	double a = 0.1;
	double b = 0.2;
	double x = 1.0;
	double r = (exp(5*log(sqrt(pow(x,2)+b)))) - pow(b,2)*pow(sin(x + a),3)/x;
	printf("result = %.5f\n", r);
	return 0;
}
