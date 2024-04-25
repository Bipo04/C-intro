#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isIsomorphic(char* s, char* t) {
    int len_s = strlen(s);
    int len_t = strlen(t);

    if (len_s != len_t) {
        return false;
    }

    int count_s[256] = {0}; // Mảng đếm số lần xuất hiện của ký tự trong chuỗi s
    int count_t[256] = {0}; // Mảng đếm số lần xuất hiện của ký tự trong chuỗi t

    for (int i = 0; i < len_s; i++) {
        char current_s = s[i];
        char current_t = t[i];

        // Kiểm tra vị trí xuất hiện của ký tự trong chuỗi s và t
        if (count_s[(unsigned char)current_s] != count_t[(unsigned char)current_t]) {
            return false;
        }

        // Tăng đếm số lần xuất hiện của ký tự trong chuỗi s và t
        count_s[(unsigned char)current_s]++;
        count_t[(unsigned char)current_t]++;
    }

    return true;
}

int main() {
    char s[] = "abab";
    char t[] = "baba";

    bool result = isIsomorphic(s, t);
    
    if (result) {
        printf("The strings are isomorphic.\n");
    } else {
        printf("The strings are not isomorphic.\n");
    }
    
    return 0;
}
