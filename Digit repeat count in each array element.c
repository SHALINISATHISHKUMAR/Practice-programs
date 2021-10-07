#include <stdio.h>
int repeats(int );
int main()
{
    int n,a[100],i;
    printf("enter size of list:");
    scanf("%d",&n);
    printf("enter list elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
       printf("4 repeats %d times \n",repeats(a[i]));
}
int repeats(int n){
    int i=0,rem,count=0;
    while(i<n){
       rem=n%10;
       if(rem==4)
        count++;
        n=n/10;
    }
    return count;
}
