#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter Your First Number : \n");
    scanf("%d", &a);

    printf("Enter Your Second Number : \n");
    scanf("%d", &b);

    printf("Enter Your Third Number : \n");
    scanf("%d", &c);

    if (a > b) {
        if (a > c) {
            printf("%d Is The Greatest Number Here ! \n", a);
        }
        else {
            printf("%d Is The Greatest Number Here ! \n", c);
        }
    }

    else {
        if (b > c) {
            printf("%d Is The Greatest Number Here ! \n", b);
        }
        else {
            printf("%d Is The Greatest Number Here ! \n", c);
        }
    }

    return 0;
}