#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/* Function prototypes */
 /* Check number of arguments */
/* Check if arguments are valid numbers */
int is_valid_number(char *num);
void multiply(char *num1, char *num2);

int main(int argc, char **argv) {
    if (argc != 3) {
        fprintf(stderr, "Error\n");
        exit(98);
    }
    if (!is_valid_number(argv[1]) || !is_valid_number(argv[2])) {
        fprintf(stderr, "Error\n");
        exit(98);
    }
    /* Multiply the numbers */
    multiply(argv[1], argv[2]);
    return 0;
}

/* Check if a string is a valid number */
int is_valid_number(char *num) {
    while (*num) {
        if (!isdigit(*num)) {
            return 0;
        }
        num++;
    }
    return 1;
}

/* Multiply two numbers and print the result */
void multiply(char *num1, char *num2) {
    int len1 = 0, len2 = 0, i, j, k;
    int *result;
    /* Calculate the length of each number */
    while (num1[len1]) {
        len1++;
    }
    while (num2[len2]) {
        len2++;
    }
    /* Allocate memory for the result */
    result = calloc(len1 + len2, sizeof(int));
    if (!result) {
        fprintf(stderr, "Error: Unable to allocate memory\n");
        exit(1);
    }
    /* Multiply each digit and add to the result */
    for (i = len1 - 1; i >= 0; i--) {
        for (j = len2 - 1; j >= 0; j--) {
            k = i + j + 1;
            result[k] += (num1[i] - '0') * (num2[j] - '0');
            result[k - 1] += result[k] / 10;
            result[k] %= 10;
        }
    }
    /* Print the result */
    for (i = 0; i < len1 + len2; i++) {
        if (result[i] != 0) {
            break;
        }
    }
    if (i == len1 + len2) {
        printf("0\n");
    } else {
        for (; i < len1 + len2; i++) {
            printf("%d", result[i]);
        }
        printf("\n");
    }
    /* Free memory */
    free(result);
}
