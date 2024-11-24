#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char S[1001];
    scanf("%s", S);

    int count[26] = {0};

    for(int i = 0;i<strlen(S);i++){
        int value = S[i] - 'a';
        count[value]++;
    }

    for(int i=0;i<26;i++)
    {
        printf("%c - %d\n",i + 'a', count[i]);
    }
    

    return 0;
}