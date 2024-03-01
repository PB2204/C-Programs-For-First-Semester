// Write A C Program To Print A Solid Square Using '*' Character , Taking Input From The User

// Example

/* Enter The Desired Arm Length Of The Square: 5
* * * * *
* * * * *
* * * * *
* * * * *
* * * * *
*/

#include <stdio.h>

int main() {
    int arm;
    printf("Enter The Desired Arm Length Of The Square: ");
    scanf("%d", &arm);

    for (int i = 0; i < arm; i++) {
        for (int j = 0; j < arm; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}