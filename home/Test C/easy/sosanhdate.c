#include <stdio.h>
#include <string.h>

struct Date{
    int day;
    int month;
    int year;
};
typedef struct Date D;

int datecmp(D s1, D s2){
    if(s1.year < s2.year)
        return -1;
    else if(s1.year > s2.year)
        return 1;
    else if(s1.month < s2.month)
        return -1;
    else if(s1.month > s2.month)
        return 1;
    else if(s1.day < s2.day)
        return -1;
    else if(s1.day > s2.day)
        return 1;
    else
        return 0;
}

int main(){
    D date[2];
    for(int i = 0; i < 2; i++){
        scanf("%d-%d-%d", &date[i].year, &date[i].month, &date[i].day);
    }
    int ok = 1;
    for(int i = 0; i < 2; i++){
        if(date[i].day > 31 || date[i].month > 12 || date[i].year > 9999){
            printf("NaN");
            ok = 0;
        }
    }
    if(ok == 1)
        printf("%d", datecmp(date[0], date[1]));
    return 0;
}