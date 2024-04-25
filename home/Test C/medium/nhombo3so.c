#include <stdio.h>
#include <string.h>

int main(){
    char a[20];
    scanf("%s", a);
    int k = 1, i = strlen(a);
    for(int j = 0; j < i; j++){
        printf("%c", a[j]);
        if(k%3 == i%3 && k != i)
            printf(",");
        k++;
    }
    return 0;
}