#include <stdio.h>

int main(void) {
	int n1,n2,i,k,c=0;
	scanf("%d%d",&n1,&n2);
	 while(n1<n2)
	 {
	 for(i=2;i<n1;i++)
	 {          k=0;
	 	if((n1%i)==0)
	 	{
	 	k=1;
	 	break;	
	 	}
	 }  
	 if(k==0)
	 {
	 c++;	
	 }
	 n1++;
	 }
	 printf("%d",c);
	 return 0;
}
