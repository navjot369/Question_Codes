#include<stdio.h>
#include<conio.h>
#include<math.h>
int main(){
	float b,a,c,d,r1,r2;
	scanf("%f %f %f",&a,&b,&c);
	d=(b*b-4*a*c);
	if(d>0){
		r1=(-b+sqrt(d))/(2*a);
		r2=(-b-sqrt(d))/(2*a);
		printf("real and distinct roots\n");
		printf("%f %f",r1,r2);
	}
	else if(d<0){
		printf("roots are imaginary");
		
	}
	else{
		r1=-b/(2*a);
		r2=-b/(2*a);
		printf(" roots are equal\n");
		printf("%f %f",r1,r2);
	}
}