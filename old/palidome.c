#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    // Write Your Code Here
    char S[1001];
    scanf("%s", S);
    
    int length = strlen(S);
    int isPalindrome = 1;

    for (int i = 0; i < length / 2; i++)
    {
        if (tolower(S[i]) != tolower(S[length - i - 1]))
        {
            isPalindrome = 0;
            break;
        }
        
    }
    if (isPalindrome) 
    {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    
    

    return 0;
}