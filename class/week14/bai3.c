#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct student{
    char id[6];
    char name[30];
    float grade;
    char classement;
};
typedef struct student SV;

void xoa_enter(char *a){
    int len_a = strlen(a);
    if(a[len_a - 1] == '\n')
        a[len_a - 1] = '\0';
}

int main(){
    SV a[10];
    for(int i = 0; i < 3; i++){
        scanf("%s", a[i].id);
        //getchar();
        fflush(stdin);
        fgets(a[i].name, 100, stdin);
        //gets(a[i].name);
        xoa_enter(a[i].name);
        scanf("%f", &a[i].grade);
    }

    for(int i = 0; i < 3; i++){
        if(a[i].grade >= 9)
            a[i].classement = 'A';
        else if(a[i].grade >= 8)
            a[i].classement = 'B';
        else if(a[i].grade >= 6.5)
            a[i].classement = 'C';
        else 
            a[i].classement = 'D';
        
    }
    printf("%d\n", strlen(a[0].id));
    printf("Ho ten         Diem   Hang\n");
    for(int i = 0; i < 3; i++){
        printf("%-15s%-7.2f%c\n", a[i].name, a[i].grade, a[i].classement);
    }
    return 0;
}
