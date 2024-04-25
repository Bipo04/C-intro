#include <stdio.h>
#include <string.h>

typedef struct XE{
    int ngay, thang, nam;
    char ma[51];
    int namsx;
} xe;


int main(){
    xe a[200]; 
    int n = 0;
    while(1){
        n = scanf("%d-%d-%d", &a[n].nam, &a[n].thang, &a[n].ngay);
        if(n != 3)  
            break;
        scanf("%s", a[n].ma);
        scanf("%d", &a[n].namsx);
    }
    
    return 0;
}