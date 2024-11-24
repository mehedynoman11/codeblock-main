#include <stdio.h>
#include <string.h>

int main() {
    // Write Your Code Here
    char a[100], b[100];
    scanf("%s %s",a,b);
    int tmp = strcmp(a,b);

    if (tmp == 0)
    {
        printf("Same\n");
    } else if (tmp < 0) {
        printf("A is smaller\n");
    } else if (tmp > 0) {
        printf("B is smaller\n");
    }
    
    


    return 0;
}