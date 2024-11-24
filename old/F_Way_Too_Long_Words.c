#include <stdio.h>
#include <string.h>
int main() {
    // Write Your Code Here
    int T;
    scanf("%d", &T);

    char S[101];
    for (int i = 0; i < T; i++)
    {
        scanf("%s", S);

        size_t length = strlen(S);
        if (length > 10)
        {
            printf("%c%d%c\n", S[0], length - 2, S[length - 1]);
        } else {
            printf("%s\n", S);
        }
        
    }
    

    return 0;
}