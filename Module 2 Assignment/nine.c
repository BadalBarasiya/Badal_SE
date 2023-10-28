#include<stdio.h>
main(){
	int n,f=1,i;
	printf("enter nunmber");
	scanf("%d",&n);
     for(i=1;i<=n;i++){
     	f=f*i;
    }
	printf("factorial of an number is %d",f);
}
