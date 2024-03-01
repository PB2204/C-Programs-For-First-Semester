// Write A C Program To Print A Hollow Square Using '*' Character , Taking Input From The User

// Example

/* Enter The Desired Arm Length Of The Square: 5
*****
*   *
*   *
*   *
*****
*/

#include <stdio.h>

int main() {
    int arm;
    printf("Enter The Desired Arm Length Of The Square: ");
    scanf("%d", &arm);

    for (int i = 1; i <= arm; i++) {
        for (int j = 1; j <= arm; j++) {
            if (i == 1 | j == 1 | i == arm | j == arm) {
                printf("*");
            }
            else {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}