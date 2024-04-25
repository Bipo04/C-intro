#include <stdio.h>
#define N 100

int n_hangXe, a[N] = {-1};

void printSolution()
{
    for(int i = 1; i <= n_hangXe; i++) 
        printf("%d", a[i]);
    printf("\n");
}

void try(int k)
{
    for(int i = 0; i <= 1; i++)
    {
        a[k] = i;
        if(k == n_hangXe) printSolution();
        else try(k+1);
        a[k] = -1;
    }
}

int main(){
    scanf("%d", &n_hangXe);
    try(1);
    return 0;
}