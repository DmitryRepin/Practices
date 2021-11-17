#include <stdio.h>

int main()
{
	double a, b;
	float max = 2147483647.0;
	if (scanf ("%lf%lf", &a, &b) == 2){
		if (a <= max & b <= max) {
			printf ("%f\n", (a + b));
		}
	} 
	return 0;
}
