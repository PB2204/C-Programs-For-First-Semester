#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Desired Number:");
    scanf("%d", &num);

    if (num % 2 == 0 && num % 3 == 0) {
        printf("%d Is Divisible By Both 2 & 3!\n", num);
    }
    else if (num % 2 == 0) {
        printf("%d Is Divisible By 2 Only!\n", num);
    }
    else if (num % 3 == 0) {
        printf("%d Is Divisible By 3 Only!\n", num);
    }
    else {
        printf("%d Is Not Divisible By Both 2 & 3!\n", num);
    }

    return 0;
}