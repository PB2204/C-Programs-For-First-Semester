// Write A C Program To Print A Solid Rectangle Using '*' Character , Taking Input From The User

//Example

/* Enter The Number Of Row You Want To Display: 5
Enter The Number Of Column You Want To Display: 9
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
* * * * * * * * *
*/

#include <stdio.h>

int main() {
    int row, column;

    printf("Enter The Number Of Row You Want To Display: ");
    scanf("%d", &row);

    printf("Enter The Number Of Column You Want To Display: ");
    scanf("%d", &column);

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < column; j++) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}