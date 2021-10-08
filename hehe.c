#include <stdio.h>
#include <string.h>

int main(void)
{
    int i;

    char userinput[256];

    char big[256];
    char small[256];


    printf("Input String: ");
    scanf("%[^\n]", &userinput);

    for (i = 0; userinput[i] != '\0'; i++) {

        if (userinput[i] == ' ') {
            continue;
        }

        if (userinput[i] >= 'A' && userinput[i] <= 'Z') {
            strcat(big, userinput[i]);
        }

        if (userinput[i] >= 'a' && userinput[i] <= 'z') {
            strcat(small, userinput[i]);
        }
    }

    printf("Big Character: %s\n", big);
    printf("Small Character: %s\n", small);

    printf("The number of All Character: %d\n", strlen(userinput));
    printf("The number of Big Character: %d\n", strlen(big));
    printf("The number of Small Character: %d\n", strlen(small));

    return 0;

}