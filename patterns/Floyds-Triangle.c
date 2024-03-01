//Example

/* Enter Your Desired Number: 5
1
2  3
4  5  6
7  8  9  10
11  12  13  14  15
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter Your Desired Number: ");
    scanf("%d", &num);

    int count = 1;

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", count);
            printf(" ");
            count++;
        }
        printf("\n");
    }
    return 0;
}