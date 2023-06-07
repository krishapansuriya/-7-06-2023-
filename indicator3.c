#include<stdio.h>
main()
{
	int a[100];
	int n,i,*p1;
	p1=a;
	printf("Enter size of array:-");
	scanf("%d",&n);
	printf("Array elements:-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	p1=&a[n-1];
	printf("Reverse array:-\n");
	for(i=0;i<n;i++)
	{
		printf("%u = %d\n",*p1--);
	}
}
