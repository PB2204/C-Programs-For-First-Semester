#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Number: ");
    scanf("%d", &num);

    if (num % 2 == 0) {
        printf("%d Is An Even Number", num);
    }
    else {
        printf("%d Is An Odd Number", num);
    }

    return 0;
}