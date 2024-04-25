#include <stdio.h>

int main(){
    int a[3][3] = { {1,2,3},
                    {2,6,7},
                    {4,9,1} };
    int b[3][3] = { {5,4,3},
                    {2,1,5},
                    {9,2,4} };
    int c[3][3];

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            c[i][j] = 0;
            for(int k = 0; k < 3; k++){
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%3d", c[i][j]);
            if(j == 2)
                printf("\n");
        }
    }         
}