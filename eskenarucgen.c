#include<stdio.h>
int main(){
	
	int x,y,z,a,b;
	printf("bir sayi girin:");
	scanf("%d",&x);
	
	x=2*x-1;
	b=x;


	for(y=1;y<=x;y+=2)
	{ 
	for(a=1;a<=b;a++)
	printf(" ");
		
	
	for(z=1;z<=y;z++)
		printf("*");
		
		b--;
		printf("\n");
		
}
	return 0;
	}

