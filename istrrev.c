#include <stdio.h>
#include<string.h>
int main(void) {
	char a[54];
	int i,l;
	scanf("%s",a);
	l=strlen(a);
	
	for(i=l;i>=0;i--)
	{
		printf("%c",a[i]);
	}
	return 0;
}
