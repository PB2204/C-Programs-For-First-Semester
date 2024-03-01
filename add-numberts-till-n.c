#include <stdio.h>

int main() {
    int num;
    printf("Enter Your Desired Number : ");
    scanf("%d", &num);

    int result = 0;

    for (int i = 1; i <= num; i++) {
        result += i;
    }

    printf("Summmation From 1 TO %d Is: %d\n", num, result);

    return 0;
}