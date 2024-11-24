#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char X[1000001];
    scanf("%s", &X);
    int sum = 0;
    for (int i = 0; i < strlen(X); i++)
    {
        sum = sum + (X[i] - '0');
    }
    printf("%d\n", sum);
    return 0;
}