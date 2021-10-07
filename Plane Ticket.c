#include <stdio.h>
#include <string.h>
int main()
{
    int n,d1,d2;
    char m1[12],m2[12];
    float amount,a=10000,D=10;
    printf("enter flying date:");
    scanf("%d",&d1);
    printf("enter flying month:");
    scanf("%s",&m1);
    printf("enter birthday date:");
    scanf("%d",&d2);
    printf("enter birthday month:");
    scanf("%s",&m2);
    if(d1==d2)
    {
        if(strcmp(m1,m2)==0)
        {
        amount=a-(a*(D/100));
        printf("you get 10percent discount");
        printf("have to pay amount is %f",amount);
        }
    else
    printf("have to pay amount is %f",a);
    }
  return 0;
}
