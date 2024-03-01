// Write A C Program To Print A Hollow Rectangle Using '*' Character , Taking Input From The User

//Example

/* Enter The Number Of Row You Want To Display: 5
Enter The Number Of Column You Want To Display: 4
****
*  *
*  *
*  *
****
*/

#include <stdio.h>

int main() {
    int row, column;

    printf("Enter The Number Of Row You Want To Display: ");
    scanf("%d", &row);

    printf("Enter The Number Of Column You Want To Display: ");
    scanf("%d", &column);

    for (int i = 1; i <= row; i++) {
        for (int j = 1; j <= column; j++) {
            if (i == 1 || i == row || j == column || j == 1) {
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