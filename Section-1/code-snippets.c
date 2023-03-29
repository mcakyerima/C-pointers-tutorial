#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int x = 10;
    int arr[] = {10, 20, 30, 40};
    int a = 10, b = 20;
    int *p;
    int *ptr = arr;

    // Declaring a pointer
    p = &x;

    // Dereferencing a pointer
    printf("The value of x is %d\n", *p); // Output: The value of x is 10

    // Assigning a new value to the variable using a pointer
    *p = 20;
    printf("The new value of x is %d\n", x); // Output: The new value of x is 20

    // Using pointers with arrays
    printf("The first element of the array is %d\n", *ptr); // Output: The first element of the array is 10
    printf("The second element of the array is %d\n", *(ptr + 1)); // Output: The second element of the array is 20
    printf("The third element of the array is %d\n", *(ptr + 2)); // Output: The third element of the array is 30
    printf("The fourth element of the array is %d\n", *(ptr + 3)); // Output: The fourth element of the array is 40

    // Using pointers with functions
    swap(&a, &b);
    printf("After swapping: a = %d, b = %d\n", a, b); // Output: After swapping: a = 20, b = 10

    return (0);
}

/**
 * swap - Swaps two integers
 *
 * @x: First integer
 * @y: Second integer
 */
void swap(int *x, int *y)
{
    int temp;

    temp = *x;
    *x = *y;
    *y = temp;
}

