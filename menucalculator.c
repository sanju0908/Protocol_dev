#include<stdio.h>
int main()
{
	int a,b;
	printf("enter the a value \n");
	scanf("%d",&a);
	printf("enter the b value \n");
	scanf("%d",&b);
	while (a<0&&b<0){
	printf("a+b=%d/n",a+b);
	printf("a-b=%d/n",a-b);
	printf("a*b=%d/n",a*b);
	printf("a%b=%d/n",a%b);
	printf("a/b=%d/n",a/b);
	printf("exit");
	}
	return 0;
}

