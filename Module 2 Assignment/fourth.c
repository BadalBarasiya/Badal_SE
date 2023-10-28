#include<stdio.h>
main(){
	
	float p,r,t,k;
	printf("enter pricipal balance");
	scanf("%f",&p);
	printf("enter rate of intrest ");
	scanf("%f",&r);
	printf("enter time balance");
	scanf("%f",&t);
	k=(p*r*t)/100;
	printf(" simple interst is %f",k);

}
