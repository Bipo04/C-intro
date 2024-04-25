#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int main(void)
{
    int number;
    char string[20];
    
    printf("Enter a number: ");
    scanf("%d", &number);
    number = number >> 2;
    printf("%d\n", number);
    itoa(number,string,2);
    /*itoa (num, target, base);
        num là số nguyên cần chuyển thành chuỗi
        target là chuỗi đích để chứa num sau khi chuyển thành chuỗi
        base là cơ số chuyển đổi, nhằm xác định một giá trị số nguyên*/
    printf("String value = %s\n", string);
    
    return 0;
}