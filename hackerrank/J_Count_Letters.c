#include <stdio.h>

int main() {
    // Write Your Code Here
    char S;
    int count[26] = {0};
    while (scanf("%c", &S) != EOF)
    {
        if (S >= 'a' && S <= 'z') {
            count[S - 'a']++;
        }
    }
    for(int i = 0; i < 26; i++)
    {
        if (count[i] > 0)
        {
           printf("%c : %d\n",i + 'a', count[i]);
        }
        
    }
    
    return 0;
}