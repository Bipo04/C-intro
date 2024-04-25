#include <stdio.h>

typedef struct thuexe
{
    int year, month, day;
    float a;
} tx;

int main(){
    tx s[1000];
    int i = 0, n = 4;

    for(; n == 4; i++){
        n = scanf("%d-%d-%d %f", &s[i].year, &s[i].month, &s[i].day, &s[i].a);
    }

    float sum = 0, sum_1day[i-1];
    for(int j = 0; j < i - 1; j++){
        sum = sum + s[j].a;
        sum_1day[j] = 0;
    }
    
    sum_1day[0] = s[0].a;
    int d = 0;
    for(int j = 1; j < i - 1; j++){
        if(s[j].month == s[j-1].month){
            if(s[j].day == s[j-1].day){
                sum_1day[d] += s[j].a;
            }
            else{
                d++;
                sum_1day[d] += s[j].a;
            }
        }
        else{
                d++;
                sum_1day[d] += s[j].a;
        }
    }

    float max = 0, min = 1000;
    for(int j = 0; j <= d; j++){
        if(sum_1day[j] > max)
            max = sum_1day[j];
        if(sum_1day[j] < min)
            min = sum_1day[j];
    }
    printf("%.2f %.2f %.2f", sum, max, min);
    return 0;
}