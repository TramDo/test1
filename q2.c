/*Tram Do -215934276*/
#include <stdio.h>

int countDigits(int x, int d);
char* testCountDigits(int x, int d, int result, char *msg);

int main()
{
printf("%s\n",testCountDigits(123, 1, 1, "single digit test") );
printf("%s\n",testCountDigits(10, 0, 1, "single 0 test") );
printf("%s\n",testCountDigits(456456, 4, 2, "two fours") );
printf("%s\n",testCountDigits(111111, 1, 6, "six 1's") );
printf("%s\n",testCountDigits(0, 0, 1, "single zero test") );

return 0;
}

int countDigits(int x, int d)
{
    int remainder, count;

    count = 0;
    while (x > 0)
    {
        remainder = x % 10;
        if (remainder == d)
        {
            count++;
        }
        x = x/10;
    }
    if (x==0 && d == 0)
    {
        count = 1;
    }
    return count;
}

char* testCountDigits(int x, int d, int result, char *msg)
{
    int methodResult;
    methodResult = countDigits(x,d);

    if (methodResult == result)
    {
        return "test passed";
    }
    else
        return "test failed";
}

