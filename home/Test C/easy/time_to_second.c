#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convert(char s[]){
    int gio, phut, giay;
    char *temp;
    temp = strtok(s, ":");
    gio = atoi(temp);
    temp = strtok(NULL, ":");
    phut = atoi(temp);
    temp = strtok(NULL, ":");
    giay = atoi(temp);
    if(gio >= 0 && gio <= 23 && phut >= 0 && phut <= 59 && giay >= 0 && giay <= 59)
        printf("%d", gio*60*60 + phut*60 + giay);
    else
        printf("INCORRECT");
}

int main(){
    char s[9];
    scanf("%s", s);
    if(strlen(s) != 8 || s[2] != ':' || s[5] != ':')
        printf("INCORRECT");
    else
        convert(s);
    return 0;
}