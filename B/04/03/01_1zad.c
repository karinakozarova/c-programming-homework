#include <stdio.h>
int main()
{
	int n, i;

	scanf("%d",&n);

	int a[n];
	for(i = 1;i <= n;i++)
	{
		scanf("%d", &a[i]);
	}
	
	for(i = n; i > 0;i--) 
	{
		printf("%d\n", a[i]);
	}

	return 0;
}
