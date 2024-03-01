//Example

/* Enter The Arm Of The Rhombus: 5
    *****
   *****
  *****
 *****
*****
*/

#include <stdio.h>

int main() {
    int num;

    printf("Enter The Arm Of The Rhombus: ");
    scanf("%d", &num);

    for (int i = 1; i <= num; i++) {
        for (int j = 1; j <= num -  i; j++) {
            printf(" ");
        }

        for (int k = 1; k <= num; k++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}