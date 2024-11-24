#include <stdio.h>

int main() {
    // Write Your Code Here
    char a[100], b[100];
    scanf("%s %s",a,b);

    int i =0;
     while (1)
    {
        if (a[i] == '\0' && b[i] == '\0')
        {
            printf("same\n");
            break;
        } else if (a[i] == '\0') {
            printf("a is Smaller.");
            break;
        } else if (b[i] == '\0')
        {
            printf("b is smaller.");
            break;
        }

        if (a[i] == b[i])
        {
            i++;
        }
        else if (a[i] > b[i]) {
            printf("b is smaller.\n");
            break;
        } 
        else {
            printf("a is smaller.\n");
            break;
        }
    }
    return 0;
}