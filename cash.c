#include <cs50.h>
#include <stdio.h>

int change = 0;
int count = 0;
const int quarter = 25;
const int dime = 10;
const int nickel = 5;
const int penny = 1;

int coins(int a);

int main(void)
{
    do
    {
        change = get_int("How much change is owed in cents? ");
    }
    while (change < 1);

    count = coins(quarter) + coins(dime) + coins(nickel) + coins(penny);
    printf("%i\n", count);
}

int coins(int a)
{
    // calculates how many coins to give back in a specific change value
    int repeat = 0;
    if (change < a)
    {
        return repeat;
    }
    else
    {
        for (repeat = 0; change >= a; repeat++)
        {
            change = change - a;
        }
        return repeat;
    }
}
