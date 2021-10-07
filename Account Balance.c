int main()
{
  int amount,initial=2000; 
  float bank_charge=0.50,Bal;
  printf("how much amount wants to withdrawal:");
  scanf("%d",&amount);
  if((amount%5)==0)
  {
      if(amount<initial)
      {
         Bal=initial-bank_charge-amount;
         printf("account balance after withdrawal is %.2f",Bal);
      } 
      else
       printf("account balance not enough cash to perform withdrawal");
  }
  else
  printf("enter valid amount(divisible by 5)");
return 0;
}
