//1+2+4+7+11+....upto n terms wcp to calculate sum of the given series.(using while loop)


#include<stdio.h>
int main(){
	int n,sum=0,i=1,term=1,d=1;
	printf("enter the number terms:");
	scanf("%d",&n);
	
	while(i<=n)
	{
		printf("%d\t \n",term);
		sum=sum+term;
		term=term+d;
		d++;
		i++;
	}
	printf("sum of the following series:%d",sum);
	return 0;
}
