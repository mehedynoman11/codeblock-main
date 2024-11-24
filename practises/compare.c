// #include <stdio.h>

// int main() {
//     // Write Your Code Here
//     char X[20], Y[20];
//     scanf("%s %s",X,Y);

//     int i = 0;
//     while(1)
//     {
//         if (X[i] == '\0' && Y[i] == '\0')
//         {
//             printf("same");
//             break;
//         } else if (X[i] == '\0')
//         {
//             printf("X is small");
//             break;
//         } else if (Y[i] == '\0')
//         {
//             printf("Y is small");
//             break;
//         }

//         if (X[i] == Y[i])
//         {
//             i++;
//         } else if (X[i] < Y[i])
//         {
//             printf("%s\n", X);
//             break;
//         } else {
//             printf("%s\n", Y);
//             break;
//         }

//     }

//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main()
{
    // Write Your Code Here
    char X[21], Y[21];
    scanf("%s %s", X, Y);
    int value = strcmp(X, Y);
    if (value < 0)
    {
        printf("%s\n", X);
    }
    else
    {
        printf("%s\n", Y);
    }

    return 0;
}