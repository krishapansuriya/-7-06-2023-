#include<stdio.h>
main()
{
	int a,b,n;
	int *p1,*p2,*p3;
	printf("Enter value A=");
	scanf("%d",&a);
	printf("Enter value B=");
	scanf("%d",&b);
	p1=&a;
	p2=&b;
	p3=p2;
	p2=p1;
	p1=p3;
	printf("Swap variables=\n");
	printf("%u = %d\n",p1,*p1);
	printf("%u = %d\n",p2,*p2);
}
