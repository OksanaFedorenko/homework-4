#include "ft_lib.h"
#include <stdio.h>
#include "ft_strlen.c"
#include "ft_memalloc.c"

int count_words(char *s, char c) {
    int count = 0;
    int len = 0;
    int i = 0;
    int j;
    int k = 0;
    int n = 0;
    int idx;
    int A[10]; //массив индексов
    int B[10]; //массив длин

    while(s[i] != '\0') {

        if (s[i] != c ) {
           idx = i;
           A[k] = idx;
           printf("A: %d\n", A[k]);
           //printf("idx: %d\n", idx);
           k++;
           j = i;
           while (s[j] != c) {
               len++;
               j++;
           }
           //printf("len: %d\n", len);
           i+=len;
           B[n] = len;
           len = 0;
           printf("B: %d\n", B[n]);
           n++;
        }
        i++;
        //printf("i: %d\n", i);
   }
   
   //return count;
}

char **ft_strsplit(char const *s, char c) {

    char *res = 

}

int main() {
    char arr[5][20] = {"hello", "fellow", "students"};

    /*size_t i;
    for (i = 0; i < 3; i++) {
        printf("%c ", arr[i][0]);
    }*/

    char *str = "*hello*fellow***students*";

    count_words(str, '*');
    //printf("%d\n", res);
 
}