#include <stdio.h>
#include<string.h>
int main(void) 
{
	char a[61],temp;
	int i,l;
	scanf("%s",a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		temp=a[i];
		a[i]=a[i+1];
		a[i+1]=temp;
		i++;
	}
printf("%s",a);
	return 0;
}
