int main()
{
    int a[100],n,i;
    int x=0,y=0;
    printf("no.of soldiers:");
    scanf("%d",&n);
    printf("no.of weapons:");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
            x++;
        else
           y++;
     }
    if( x>y)
     printf("READY FOR BATTLE");
    else
     printf("NOT READY FOR BATTLE");
    return 0;
}
