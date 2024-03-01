#include <stdio.h>

int main() {
    int a, b;

    printf("Enter Your First Number: ");
    scanf("%d", &a);

    printf("Enter Your Second Number: ");
    scanf("%d", &b);

    int i, num;;

    for (num = a; num <= b; num++) {

        for(i = 2; i < num; i++) {
            if (num % i == 0) {
                break;
            }
        }
        if (i == num) {
        printf("%d\n", num);
        }
    }
    return 0;
}