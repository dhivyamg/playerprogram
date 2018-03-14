#include <stdio.h>

int main(void) {
	int n,m,sum=0;
	scanf("%d",&n);
	while(n!=0)
	{
		m=n%10;
		sum=sum+(m*m);
		n=n/10;
	}
	printf("sum is %d",sum);
	return 0;
}
