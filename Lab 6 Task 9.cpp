#include<stdio.h>
#include<math.h>
int main (){
	int n,t;
	double p,r,a;
	printf("entre the values of p,r,n and t\n");
	scanf("%lf %lf %d %d" ,&p,&r,&n,&t);
	a = p*pow((1+r/n),n*t);
	
	printf("%.2lf",a);
	return 0;
}


