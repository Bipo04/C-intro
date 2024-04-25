#include <stdio.h>

char* ones[] = {"", "mot", "hai", "ba", "bon", "nam", "sau", "bay", "tam", "chin"};
char* tens[] = {"", "muoi", "hai muoi", "ba muoi", "bon muoi", "nam muoi", "sau muoi", "bay muoi", "tam muoi", "chin muoi"};
char* teens[] = {"muoi", "muoi mot", "muoi hai", "muoi ba", "muoi bon", "muoi lam", "muoi sau", "muoi bay", "muoi tam", "muoi chin"};

void printNumber(int num) {
    if (num >= 1000000000) {
        printNumber(num / 1000000000);
        printf("ty ");
        num %= 1000000000;
    }
    if (num >= 1000000) {
        printNumber(num / 1000000);
        printf("trieu ");
        num %= 1000000;
    }
    if (num >= 1000) {
        printNumber(num / 1000);
        printf("nghin ");
        num %= 1000;
    }
    if (num >= 100) {
        printNumber(num / 100);
        printf("tram ");
        num %= 100;
    }
    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    }
    if (num >= 10) {
        printf("%s ", teens[num - 10]);
        return;
    }
    if (num > 0) {
        printf("%s ", ones[num]);
    }
}

int main() {
    int number;
    scanf("%d", &number);
    printNumber(number);
    return 0;
}