#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char S[1001];
    scanf("%s", S);

    int capitalLetter = 0, samllLetter = 0;
    
    for (int i = 0; S[i] != '\0' ; i++)
    {
        if (S[i] >= 'A' && S[i] <= 'Z')
        {
            capitalLetter++;
        } else if (S[i] >= 'a' && S[i] <= 'z')
        {
            samllLetter++;
        }
    }
    printf("%d %d", capitalLetter,samllLetter);
    return 0;
}