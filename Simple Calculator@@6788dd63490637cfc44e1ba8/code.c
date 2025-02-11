#include <stdio.h>

int main() {
    int a, b;
    char c;

    // Use space before %c to consume any newline or extra characters from the buffer
    scanf("%d %d %c", &a, &b, &c);  // Fixed format to ensure correct reading

    switch (c) {
        case '+':
            printf("%d\n", a + b);
            break;
        case '-':
            printf("%d\n", a - b);
            break;
        case '*':
            printf("%d\n", a * b);
            break;
        case '/':
            if (b == 0) {
                printf("error");
            } else {
                printf("%d\n", a / b);
            }
            break;
        default:
            printf("error");
    }

    return 0;Loading Code...