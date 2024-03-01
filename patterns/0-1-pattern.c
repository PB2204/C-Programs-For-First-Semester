//Example

/* Enter The Length Of The Base Of The Pyramid: 5
 1
 0 1
 1 0 1
 0 1 0 1
 1 0 1 0 1
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter The Length Of The Base Of The Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= i; j++) {
            if ((i + j) % 2 == 0) {
                printf(" 1");
            }
            else {
                printf(" 0");
            }
        }
        printf("\n");
    }

    return 0;
}