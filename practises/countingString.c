#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char N[100];
    scanf("%s", N);
    int count[30] = {0};
    for (int i = 0; i < strlen(N); i++)
    {
        // printf("%c ", N[i]);
        int value = N[i] - 'a';
        count[value]++;
    }
    for (int i = 0; i < 30; i++)
    {
        printf("%c - values count is : %d\n", i + 'a', count[i]);
    }
    
    

    return 0;
}