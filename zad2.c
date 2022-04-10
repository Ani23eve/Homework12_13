#include <stdio.h>

int myStrlen(char* string){
   int len = 0;
   while(string[len++] != 0);
   return len;
}

void swap(char* a, char* b){
    char tmp = *a;
    *a = *b;
    *b = tmp;
}

void Reverse(char* ptr){
    int n = myStrlen(ptr);
    for(int i=0;i< (n - 1) / 2; i++){
        swap(&ptr[i], &ptr[n - i - 2]);
    }
}

void test(char* ptr){
    printf("%s -> ", ptr);
    Reverse(ptr);
    printf("%s\n", ptr);
}

int main(){
    char a0[] = "abcde";
    char a1[] =  "dada";
    char a2[] = "ne";
    test(a0);
    test(a1);
    test(a2);
}