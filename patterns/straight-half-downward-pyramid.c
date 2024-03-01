// Example

/* Enter The Length Of The Base Of The Pyramid: 5
* * * * *
* * * *
* * *
* *
*
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter The Length Of The Base Of The Pyramid: ");
    scanf("%d", &num);

    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num - i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}