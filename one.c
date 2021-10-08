#include <stdio.h>

int main() {

    char answer;

    printf("Enter A [Y] or [N] : ");
    answer = getchar();

    if (answer == 'y' || answer == 'Y')
        printf("You Enter Y\n");
    else if ( answer == 'n' || answer == 'N')
        printf("You Enter N\n");
    else
        printf("Error !\n");
    return 0;
}
