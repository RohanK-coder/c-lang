#include<stdio.h>
int main(){
	const double PI = 3.14;
	double radius;
	double circumference;

	printf("\nEnter radius of the circle : ");
	scanf("%lf",&radius);
	
	circumference = 2 * PI * radius;
	printf("circumference is %lf",circumference);

	return 0;
}
