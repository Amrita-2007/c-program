#include<stdio.h>
int main(){
	//Reverse of a number 
	int x;
	printf("Enter the number to check : ");
	scanf("%d",&x);
	
	int xc=x;int p;
	int rev=0;//4321
	
while(x>0){	
	p=x%10;
	
	rev=rev*10+p;
	
	x=x/10;	
}	
	printf("Reverse of the number is %d",rev);
	
	return 0;
}
