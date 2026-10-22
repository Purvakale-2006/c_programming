
#include <stdio.h>

void Check(int iNo)
{
    if(iNo % 5 == 0)
    {
        printf("Number is divisible by 5");
    }
    else
    {
        printf("Number is not divisible by 5");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter a number: ");
    scanf("%d", &iValue);

    Check(iValue);

    return 0;
}
