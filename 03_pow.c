#include <math.h>
#include <stdio.h>

int main()
{
	double x, y, c;
	double max = 2147483647.0;
	if (scanf ("%lf%lf", &x, &y) == 2) {
		if (x <= max & y <= max) {
			c = pow (x, y);
			printf("%f\n", c);
		}
	}
	return 0;
}
