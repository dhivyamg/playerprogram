#include <stdio.h>
#include<string.h>
int main(void) {
	char b[57];
	int i,l;
	scanf("%s",b);
	l=strlen(b);
	
	
	for(i=l-1;i>=0;i--)
	{
	if(b[i]=='a'||b[i]=='e'||b[i]=='i'||b[i]=='o'||b[i]=='u')
	{
		
	}
	else
	{
		printf("%c",b[i]);
	}
	}
	return 0;
}
