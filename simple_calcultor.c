#include <stdio.h>
/**
 * main - A simple calculator programme
 *
 * @operator
 * Description : addition, subtraction, division and modulus
 *
 * return 0 : always successful
 */

int main()
{
    printf("Welcome to My simple Calculator");

    printf("'+' is for addition, '-' is for subtraction, '*' is for multiplication, '/' is for division, '^' is for power,\n");

    float a,
        b, result, result_power, result_power_neg;
    result_power = 1;
    char operator;
    printf("Enter the operator: ");
    scanf("%c", &operator);
    printf("Enter first operand: ");
    scanf("%f", &a);
    printf("Enter second operand: ");
    scanf("%f", &b);

    switch (operator)
    {
    case '+':
        /* code */
        result = a + b;
        printf("The addition result is %f \n", result);
        break;
    case '-':
        result = a - b;
        printf("The subtraction result is %f \n", result);
        break;
    case '*':
        result = a * b;
        printf("The multiplication result is %f \n", result);
        break;
    case '/':
        result = a / b;
        printf("The division result is %f \n", result);
        break;
    // case '%':
    //     result = a % b;
    //     printf("The remainder is %d\n", result);
    //     break;
    case '^':
        if (b > 0)
        {
            while (b != 0)
            {
                result_power *= a;
                --b;
            }
            printf("%f", result_power);
        }

        else
        {
            while (b < 0)
            {
                if (b == 0)
                {
                    break;
                }
                else
                {
                    result_power_neg = (1 / a);
                    result_power *= result_power_neg;
                }
                ++b;
            }
            printf("%f", result_power);
        }
        break;

    default:
        printf("%c, No such operator.Thanks for using the App!", operator);
        break;
    }

    return 0;
}
