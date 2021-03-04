#include <stdio.h>

int main()
{
    float income_amount;
    printf("Enter Your income amount (in Lakhs EX: 100000 => 1L)");
    scanf("%f", &income_amount);

    if (income_amount < 2.5)
    {
        income_amount = income_amount;
        //    printf("Your income with taxes is : %d", income_amount);
    }
    else if (income_amount > 2.5 && income_amount < 5)
    {
        income_amount = income_amount + (income_amount / 100) * 5;
    }
    else if (income_amount > 5 && income_amount < 10)
    {
        income_amount = income_amount + (income_amount / 100) * 20;
    }
    else if (income_amount > 10)
    {
        income_amount = income_amount + (income_amount / 100) * 30;
    }
    else
    {
        printf("Please Enter Valid Amount !");
    }

    printf("Yout income with tax is %f L", income_amount);
}