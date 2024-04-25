#include <stdio.h>
 
int main(void)
{
    char str[128];
    printf("Enter a string: ");
    scanf("%[^aeio\n]", str);
    printf("The input was \"%s\"\n", str);
    return 0;
}