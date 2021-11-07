#include<stdio.h>
int main()
{
	int num=0,i=2,res=0;
	printf("Enter the number:  ");
	scanf("%d",&num);
   while(i<=num-1)
   {
	res=num%i;
	if(res==0)
	{
	printf("not a prime\n");
	return 0;
	}
         i=i+1;
	
   }
	printf("prime\n");
	return 0;
}
