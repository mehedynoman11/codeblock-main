#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    char S[1001];
    scanf("%s", S);

    int vowelCount = 0;
    for (int i = 0; i < strlen(S); i++)
    {
        if (S[i] == 'a' || S[i] == 'e' || S[i] == 'i' || S[i] == 'o' || S[i] == 'u')
        {
            vowelCount++;
        }
        
    }
    printf("%d\n", vowelCount);

    return 0;
}
