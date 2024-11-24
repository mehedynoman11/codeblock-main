#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char a[101], b[101];
    scanf("%s %s",a,b);
    // printf("%s %s",a,b);
    for (int i = 0; i <= strlen(b); i++)
    {
        a[i] = b[i];
    }
    // strcpy(a, b);

    printf("%s %s",a,b);
    

    return 0;
}