#include<stdio.h>
#define pi 3.14159
int main(){
	double radius, area, circumferance;
	int num_circ;
	char circ_name;
	
	radius = 5.0;
	num_circ = 1;
	circ_name = 'A';
	
	area = pi * radius * radius;
	circumferance = 2* pi * radius;
	
	printf("Area is: %.2lf\n",area);
	printf("Circumferance is: %.2lf\n",circumferance);
	return 0;
}
	
	
