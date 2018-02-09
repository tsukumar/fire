#include <stdio.h>
#include<string.h>
int main() 
{
	char a[100];
	int i,count=0;
	printf("enter the string:");
	gets(a);
    for(i=0;i<strlen(a);i++)
	{
	   if(a[i]=='.')
	    {
	        count=count+1;
	    }
	}
	printf(" the space in your string is:%d",count);
	return 0;
}
	    
