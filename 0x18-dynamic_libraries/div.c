#include <stdio.h>
/**
 * div - divides two integers
 * @a: first int
 * @b: second int
 * Return: divided final result
 */
int div(int a, int b) {
    return (a / b);
}

int main() {
    int result = div(10, 2);
    printf("Result: %d\n", result);
    return 0;
}
