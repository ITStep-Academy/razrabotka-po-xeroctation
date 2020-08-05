#include<stdio.h>

void main() {

	double num;
	int integer;
	double fract;

	printf("input the number ");
		scanf_s("%lf", &num);

		integer = (int) num;
		fract = num - integer;

		printf("%.2lf\n", num);
		printf("%d\n", integer);
		printf("%.2lf\n", fract);


}