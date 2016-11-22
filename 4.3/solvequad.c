void solve(int a, int b, int c);
#include <stdio.h>
#include <math.h>

int main()
{
	int var_a;
	int var_b;
	int var_c;
	printf("Please enter the value of the coefficient a: ");
	scanf("%i", &var_a);
	printf("Please enter the value of the coefficient b: ");
	scanf("%i", &var_b);
	printf("Please enter the value of the coefficient c: ");
	scanf("%i", &var_c);
	solve(var_a,var_b,var_c);
    return 0;
}

void solve(int a, int b, int c) {
	double dis = (b*b) - (4*a*c);
	if (dis < 0)
		printf("IS YOUR BRAIN IMAGINARY? CAUSE YOU JUST ENETERED IT.");
	else {
		printf("Root 1: %f", (sqrt(dis) - b)/(2*a));
		printf("\nRoot 2: %f", (sqrt(dis) + b)/(2*a));
	}
	return;
}
