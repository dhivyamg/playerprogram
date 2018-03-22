#include <stdio.h>
#include<string.h>
int main(void)
{      
	char a[23],b[2];
	int i,l,c=0;
	scanf("%s",&a);
	scanf("%s",&b);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if(a[i]==b[0])
		{
			printf("%d",i+1);
		}
	}
	
	return 0;
}
