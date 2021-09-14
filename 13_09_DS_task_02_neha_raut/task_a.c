#include <stdio.h>
struct bank
{
     int acc_no;
     char name[20];
     int bal;
}b[10];
void check(struct bank b[],int n) 
{
     int i;
     printf("\nCustomer Details whose Balance < 100 Rs. \n");
     for(i=0;i<n;i++)
     {
          if(b[i].bal<100)
          {
               printf("Account Number : %d\n",b[i].acc_no);
               printf("Name           : %s\n",b[i].name);
               printf("Balance        : %d\n",b[i].bal);
          }
     }
}
void depo_withd(struct bank b[],int accnum, int amount, int code)
{
    int i;
    for (i=0; i<10; i++)
    {
        if (b[i].acc_no==accnum)
        break;
    }
    if (!code)
	{
		if (b[i].bal - amount < 100)
		{
			printf("\nThe balance is insufficient for the specified withdrawal");
			return;
		}
		else
		{
			b[i].bal -= amount;
			printf("\nYour new account balance is : %d", b[i].bal);
		}
	}
	else
	{
		b[i].bal += amount;
		printf("\nYour new account balance is : %d", b[i].bal);
	}

}
int main()
{
	int accnum, name, amount, code;
    int i;
    for(i=0;i<3;i++)
    {
          printf("Enter Details of Customer %d\n",i+1);
          printf("Enter Account Number : ");
          scanf("%d",&b[i].acc_no);
          printf("Enter Name           : ");
          scanf("%s",b[i].name);
          printf("Enter Balance        : ");
          scanf("%d",&b[i].bal);
          
     }
     check(b,10);           //call function check
    
    printf("\nEnter your account number : ");
	scanf("%d", &accnum);

	printf("\nEnter your name : ");
	scanf("%s", &name);

	printf("Enter 1 for deposit and 0 for withdrawal : ");
	scanf("%d", &code);
	if (code)
	{
		printf("\nEnter amount to be deposit : ");
		scanf("%d", &amount);
	}
	else
	{
		printf("\nEnter amount to withdraw : ");
		scanf("%d", &amount);
	}
	depo_withd(b,accnum, amount, code);

     return 0;
}
