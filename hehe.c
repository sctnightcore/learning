#include <stdio.h>
#include <string.h>

int main(void)
{
    int i, cnt_big, cnt_small;

    char userinput[256];

    char big[256];
    char small[256];

    printf("Input String: ");
    scanf("%[^\n]", &userinput);

    for (i = 0; i <= strlen(userinput); i++)
    {
        if (isupper(userinput[i]))
        {
            big[cnt_big] = userinput[i];
            big[cnt_big + 1] = '\0';
            cnt_big++;
        }
        else
        {
            small[cnt_small] = userinput[i];
            small[cnt_small + 1] = '\0';
            cnt_small++;
        }
    }
    printf("Big Character: %s\n", big);
    printf("Small Character: %s\n", small);

    printf("The number of All Character: %d\n", strlen(userinput));
    printf("The number of Big Character: %d\n", strlen(big));
    printf("The number of Small Character: %d\n", strlen(small));

    return 0;
}
