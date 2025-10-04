#include <stdio.h>
#include <math.h>
int main(){
	int n,t;
	float a,p,r;
	printf("Entre the values of a,p,r,n and t\n ");
	scanf("%f %f %f %d %d", &a, &p, &r, &n, &t);
	
	a= p*pow((1+r/n),n*t);
	printf("A = %.2f", a);
	return 0;
}
