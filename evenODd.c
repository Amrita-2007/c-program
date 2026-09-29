#include<stdio.h>
int main(){
	//SUm of Even and Odd digits of a number
	int x=1234;
	int xc=x;int p;
	int esum=0,oddsum=0;
	
while(x>0){	
	p=x%10;
	
	if (p%2==0)
		esum=esum+p;
	else
		oddsum=oddsum+p;
	
	x=x/10;	
}	
printf("Sum of Even digits of the number %d is %d",xc,esum);
printf("\nSum of Odd Digits of the number is %d is %d",xc,oddsum);
	
	return 0;
}
