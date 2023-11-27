#include<stdio.h>

main()
{
	int a,b;
	
	printf("Enter value of A = ");
	scanf("%d",&a);
	
	printf("Enter value of B = ");
	scanf("%d",&b);
	
	if(a<b){
		printf("A is MINIMUM");
	}
	else{
		printf("B is MINIMUM");
	}
}