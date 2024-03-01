//Example

/* Enter Your Desired Number: 5
        1
      2 1 2
    3 2 1 2 3
  4 3 2 1 2 3 4
5 4 3 2 1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter Your Desired Number: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        int j;
        for (j = 1; j <= num -  i; j++) {
            printf(" ");
        }

        int k = i;
        for (; j <= num; j++) {
            printf("%d ", k--);
        }

        k = 2;
        for (; j <= num +  i - 1; j++) {
            printf("%d ", k++);
        }
        printf("\n");
    }
    return 0;
}