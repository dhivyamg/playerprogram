#include <stdio.h>

int main(void) {
	int n,i,sum=1;
	printf("num is \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		sum=sum*i;
		
	}
	printf("%d",sum);
	return 0;
}
