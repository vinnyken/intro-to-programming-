//program that gives a discount on goods worth 5000 and above
#include<stdio.h>

int main()
{
    float Amount,discount,bal,amount;
    
    printf("Enter Amount\n");
    scanf("%f",&Amount);
    
    
    if(Amount>=5000)
    
    {discount = 0.9*Amount;
    printf("amount %f",discount);
    }
    
    else
    {discount = 1 * Amount;
    }
        return 0;
   
    }