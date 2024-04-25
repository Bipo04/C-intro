#include <stdio.h>
#include <string.h>

int strend(const char *s, const char *t) {
    int i1 = strlen(s);
    int i2 = strlen(t);
    if (i2 > i1) {
        return 0;
    }
    const char *s_new = s + (i1 - i2);
    return strcmp(s_new, t) == 0 ? 1 : 0;
}

int main(){
    char dulieu[5][1000] = {"TV127  31 inch Television",
                            "CD057  CD Player",
                            "TA877  Answering Machine",
                            "CS409  Car Stereo",
                            "PC655  Personal Computer"
                           };
    char sanpham[100];
    scanf("%[^\n]", sanpham);
    char *check;
    int i;
    for(i = 0; i < 5; i++){
        check = strstr(dulieu[i], sanpham);
        if(check != NULL){
            printf("%s", dulieu[i]);
            break;
        }
    }
    if(i == 5) 
        printf("Khong tim thay.");
    return 0;
}