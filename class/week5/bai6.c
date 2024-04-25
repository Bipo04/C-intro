#include <stdio.h>
#include <math.h>

int main(){
    int sinhvien;
    float avg;
    printf("Nhap so sinh vien: ");
    scanf("%d",&sinhvien);
    avg = (float) sinhvien / 7;
    if (sinhvien % 7 == 0 ) 
        printf("Sinh vien duoc chia deu trong 7 lop va moi lop co %d sinh vien.", sinhvien/7);
    else{
        printf("So sinh vien trong lop nho nhat la %d\n", (int) avg);
        printf("So sinh vien trong lop lon nhat la %d\n", (int) avg + 1);
        printf("So sinh vien trung binh trong cac lop la %.2f\n", avg);
        printf("So lop co kich thuoc lon hon kich thuoc trung binh la %d\n", sinhvien % 7);
        printf("So sinh vien trong cac lop co kich thuoc lon hon kich thuoc trung binh la %d\n", sinhvien % 7 *7);
        printf("So lop co kich thuoc nho hon kich thuoc trung binh la %d\n", 7 - sinhvien % 7);
    }
    return 0;
}