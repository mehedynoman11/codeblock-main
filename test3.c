#include <stdio.h>
#include <string.h>

int main()
{
    // Write Your Code Here
    int X;
    scanf("%d", &X);
    int sum = 0;
    while (X > 0) {
        sum+= X % 10;
        X = X / 10;
    }
    printf("%d\n",sum);

    return 0;
}