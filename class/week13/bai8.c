#include <stdio.h>
#include <string.h>

int val[] = {1,5,10,50,100,500,1000};

char lama[] = "IVXLCDM";

int find(char c){
    for(int i = 0; i < 7; i++){
        if(lama[i] == c)
            return i;
    }
}

int solve(char c[]){
    int n = strlen(c);
    int giatri = val[find(c[n-1])];
    for(int i = n - 1; i > 0; i--){
        int pos1 = find(c[i]);
        int pos2 = find(c[i-1]);
        if(pos1 <= pos2)
            giatri += val[pos2];
        else
            giatri -= val[pos2];
    }
    return giatri;
}

int main(){
    char s[10];
    scanf("%s", s);
    printf("%d",solve(s));
    return 0;
}