// 0,1,1,2,3,5,8.....upto n terms wcp to display the given sequence
#include<stdio.h>
int main(){
	int n,c,a=0,b=1,i=1;
	printf("enter the number of term =");
	scanf("%d",&n);
	
	
	printf("fibonacci series :\t");
	while (i<=n)
	{
		printf("%d\t",a);
		c=a+b;
		a=b;
		b=c;
		i++;
	}
	return 0;
}
