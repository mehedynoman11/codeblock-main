// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Write Your Code Here
//     char S[100];
//     scanf("%s",S);
//     int length = strlen(S);
//     for(int i = length -1;i >= 0;i--)
//     {
//         printf("%c",S[i]);
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char S[100];
    scanf("%s",S);

    int length = strlen(S);
    for(int i=0;i<length / 2;i++)
    {
        char tmp = S[i];
        S[i] = S[length - i - 1];
        S[length - i - 1] = tmp;
    }

    printf("%s",S);
    

    return 0;
}