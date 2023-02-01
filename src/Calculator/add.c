#include<math.h>

int addition(int num1,int num2)
{
    return num1+num2;
}

int subtraction(int num1,int num2)
{
    return num1-num2;
}

int multiplication(int num1,int num2)
{
    return num1*num2;
}

int divison(int num1 ,int num2)
{
    return num1/num2;
}


int modulus (int number)
{
    if(number<0)
    {
        number = (-1) * number;

        return number;
    }
    
    else
        return number;
}

int square (int number)
{
    number = number * number;

    return number;
}

int squareroot(int number)
{
    number = sqrt(number);

    return number;
}

int cube (int number)
{
    number = number * number * number;

    return number;
}

int cuberoot(int number)
{
    number = cbrt(number);

    return number;
}
