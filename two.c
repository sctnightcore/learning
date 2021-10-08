#include <stdio.h>

int main()
{

    int a, b, choice;
    float s = 0.00;

    printf("1: Add\n");
    printf("2: Subtract\n");
    printf("3: Multiply\n");
    printf("4: Divide\n");

    printf("Enter choice  1..4: ");
    scanf("%d", &choice);

    printf("Endter Number 1,2: ");
    scanf("%d %d", &a, &b);

    if (choice == 1)
    {
        s = a + b;
        printf("%d + %d = %f\n", a, b, s);
    }
    else if (choice == 2)
    {
        s = a - b;
        printf("%d - %d = %f\n", a, b, s);
    }
    else if (choice == 3)
    {
        s = a * b;
        printf("%d * %d = %f\n", a, b, s);
    }
    else if (choice == 4)
    {
        s = a / b;
        printf("%d / %d = %f\n", a, b, s);
    }

    return 0;
}

/*
@sctnightcore ➜ /workspaces/learning (main ✗) $ cd "/workspaces/learning"
@sctnightcore ➜ /workspaces/learning (main ✗) $ ./"two" 
1: Add
2: Subtract
3: Multiply
4: Divide
Enter choice  1..4: 1
Endter Number 1,2: 1 2
1 + 2 = 3.000000
@sctnightcore ➜ /workspaces/learning (main ✗) $ 
*/