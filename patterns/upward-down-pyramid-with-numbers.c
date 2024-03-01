//Example

/* Enter The Length Of The Base Of The Pyramid: 5
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter The Length Of The Base Of The Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num; j++) {
            if (j > i) {
                printf(" ");
            }
            else {
                printf("%d ", i);
            }
        }
        printf("\n");
    }

    return 0;
}