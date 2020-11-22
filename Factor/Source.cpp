#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int strNum(char* str) {
    int i, x = 0;
    for (i = 0; i < strlen(str); i++) {
        if (str[i] >= '0' && str[i] <= '9')
            x++;
    }
    if (x == strlen(str)) return 1;
    else return 0;
}
int main() {
    char num[100];
    int a = 0, k = 2, i;
    int* prt = &a;
    printf("Input number : ");
    scanf("%s", num);
    if (strNum(num) == 1) {
        for (i = 0; i < strlen(num); i++) {
            (*prt) = (num[i] - '0') + (*prt) * 10;
        }
        if ((*prt) < 2) printf("The number is less than 1");
        else {
            printf("Factor is : ");
            while ((*prt) != 1) {
                while ((*prt) % k == 0) {
                    printf("%d", k);
                    (*prt) /= k;
                    if ((*prt) == 1)break;
                    printf(" x ");
                }
                k++;
            }
        }
    }
    else printf("!! ERROR !!");
    return 0;
}