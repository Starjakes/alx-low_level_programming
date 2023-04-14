#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2);
int get_digit(char c);
int is_positive_integer(char *str);

/**
 * main - Entry point
 * @argc: Argument count
 * @argv: Array of arguments
 *
 * Return: 0 on success, 98 on failure
 */
int main(int argc, char **argv)
{
    int result;

    if (argc != 3)
    {
        printf("Error\n");
        return (98);
    }

    if (!is_positive_integer(argv[1]) || !is_positive_integer(argv[2]))
    {
        printf("Error\n");
        return (98);
    }

    result = multiply(argv[1], argv[2]);
    printf("%d\n", result);

    return (0);
}

/**
 * multiply - Multiplies two positive numbers
 * @num1: First number
 * @num2: Second number
 *
 * Return: Product of the two numbers
 */
int multiply(char *num1, char *num2)
{
    int len1, len2, i, j, digit, carry, sum = 0;
    int *result;

    len1 = strlen(num1);
    len2 = strlen(num2);
    result = calloc(len1 + len2, sizeof(int));

    if (!result)
        return (0);

    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            digit = get_digit(num1[i]) * get_digit(num2[j]) + result[i + j + 1] + carry;
            carry = digit / 10;
            result[i + j + 1] = digit % 10;
        }
        result[i + j + 1] = carry;
    }

    for (i = 0; i < len1 + len2; i++)
    {
        sum += result[i];
        result[i] = sum % 10;
        sum /= 10;
    }

    while (sum)
    {
        result[i++] = sum % 10;
        sum /= 10;
    }

    while (i > 0 && result[i - 1] == 0)
        i--;

    sum = 0;
    for (j = i - 1; j >= 0; j--)
        sum = sum * 10 + result[j];

    free(result);

    return (sum);
}

/**
 * get_digit - Gets the digit value of a character
 * @c: Character to get the digit value of
 *
 * Return: Digit value of the character
 */
int get_digit(char c)
{
    return (c - '0');
}

/**
 * is_positive_integer - Checks if a string represents a positive integer
 * @str: String to check
 *
 * Return: 1 if str is a positive integer, 0 otherwise
 */
int is_positive_integer(char *str)
{
    int i;

    for (i = 0; str[i]; i++)
    {
        if (!isdigit(str[i]))
            return (0);
    }

    return (1);
}

