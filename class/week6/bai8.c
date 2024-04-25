#include <stdio.h>

int main(){
    char xe;
    float time;
    printf("Loai xe cua quy khach la(C la xe con, B la xe buyt va T la xe tai): ");
    scanf("%s", &xe);
    printf("So gio dau trong bai la: ");
    scanf("%f", &time);
    switch(xe){
        case 'C' : 
            if(time <= 2)
                printf("Gia phai tra la: %.2f $", time*0.7);
            else 
                printf("Gia phai tra la: %.2f $",0.7*2+(time-2)*2.5);
            break;
        case 'B' :
            if(time <= 2)    
                printf("Gia phai tra la: %.2f $",time*1.5);
            else 
                printf("Gia phai tra la: %.2f $",1.5*2 + (time - 2)*2.0);
            break;
        case 'T' :
            if(time <=2 )
                printf("Gia phai tra la: %.2f $",time*2.5);
            else 
                printf("Gia phai tra la: %.2f $",2.5*2 + (time - 2)*3.25);
            break;
        default:
            printf("Loai xe ban chon chua phu hop.");
            break;
    }
    
return 0;
}