//Example

/* Enter The Length Of The Base Of The Pyramid: 5
    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter The Length Of The Base Of The Pyramid: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num - i; j++) {
            printf(" ");
        }
        for (int k = 1; k <=i; k++) {
            printf("%d ", k);
        }
        printf("\n");
    }
    return 0;
}