#include <stdio.h>
#include <string.h>
int main()
{
    int n,j;
    printf("no.of persons:");
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
    int g,Y=0,I=0,N=0,i,k;
    printf("no.of gestures:");
    scanf("%d",&g);
    char s[g];
    printf("enter gestures(if yes-Y,no-N,india-I):");
    for(i=0;i<g;i++)
    scanf("%s",&s[i]); 
    printf("%d",strlen(s));
    for(k=0;k<strlen(s);k++)
    {
        if(s[k]=='I')
            I++;
        else if(s[k]=='Y')
            Y++;
        else
            N++;
    }
    if(I!=0)
     printf("Indian\n");
    else
    {
        if(Y!=0)
         printf("Not Indian\n");
        else 
         printf("Not Sure\n");
    }
    }
   return 0;
}
