#include <stdio.h>
#include <string.h>

void myFunction() {
    char X;
    scanf("%s",&X);

    if (X >= 'a' && X <= 'z')
    {
        X = X-32;
    }
    printf("%c", X);
}

int main() {
    // Write Your Code Here
    
    myFunction();
    return 0;
}