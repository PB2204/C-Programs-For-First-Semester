#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Desired Number: ");
    scanf("%d", &num);

    int i;
    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            printf("%d Is Not A Prime Number !\n", num);
            break;
        }
    }

    if (i == num) {
        printf("%d Is A Prime Number !\n", num);
    }

    return 0;
}