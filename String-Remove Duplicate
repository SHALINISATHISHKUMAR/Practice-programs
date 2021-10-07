#include <stdio.h>
#include <string.h>
int main()
{
    char s[100];
    int i,j,k;
    printf("Enter string:");
    gets(s);
    for(i=0;s[i];i++)
    {
        for(j=i+1;s[j];j++)
        {
            if(s[j]==s[i])
            {
                for(k=j;s[k];k++)
                {
                    s[k]=s[k+1];
                }
            }
        }
    }
    printf("After removing:%s",s);
    return 0;
}
