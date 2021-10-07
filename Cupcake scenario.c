#include <stdio.h>
int main()
{
    int n,a[n],i,eat;
    printf("no.of test case:");
    scanf("%d",&n);
    printf("cupcakes:");
    for(i=0;i<n;i++)
     scanf("%d",&a[i]);
     printf("remaining cakes are for eat:");
    for(i=0;i<n;i++){
        eat=(a[i]/2)+1;
        printf("%d ",eat); }
    return 0;
}
