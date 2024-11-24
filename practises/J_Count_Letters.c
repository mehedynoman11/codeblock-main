#include <stdio.h>
#include <string.h>
#include <stdlib.h> 

int main() {
    int max_size = 10000000; 
    char *S = (char *)malloc((max_size + 1) * sizeof(char)); 
    if (S == NULL) { 
        printf("Memory allocation failed\n");
        return 1;
    }

    scanf("%s", S);

    int count[26] = {0};
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] >= 'a' && S[i] <= 'z')
        {
            int value = S[i] - 'a';
            count[value]++;
        }
    }

    for (int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
            printf("%c : %d\n", i + 'a', count[i]);
        }
    }

    return 0;
}