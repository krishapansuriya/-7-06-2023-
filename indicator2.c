#include<stdio.h>
main()
{
	int a[100],i,n;
	int *p1;
	p1=a;
	printf("Enter array size=");
	scanf("%d",&n);
	printf("Array elements:-\n");
	for(i=0;i<n;i++)
	{
		printf("a[%d]",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		printf("%u = %d\n",p1+i,*(p1+i));
	}
}
