int integerPower(int base, int exponent);
#include <stdio.h>

int main()
{
    printf("%i",integerPower(2,8));
    return 0;
}

int integerPower(int base, int exponent)  {
    int ans = 1;
    int i;
    for(i = 0;i < exponent;i++)
        ans *= base;
    return ans;
}
