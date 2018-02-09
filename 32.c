#include <stdio.h>
#include <string.h>
 
void main()
{
    char a[200];
    int count = 0, i;
 
    printf("enter the string\n");
   gets(a);
    for (i = 0;a[i]!= NULL;i++)
    {
        if (a[i] == ' ')
            count++;    
    }
    printf("number of words in given string are: %d\n", count + 1);
}
