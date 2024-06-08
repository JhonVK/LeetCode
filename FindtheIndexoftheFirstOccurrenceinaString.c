#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int strStr(char* haystack, char* needle) {

    if (strlen(needle) == 0) {
        return 0;
    }

    for (unsigned int i = 0; i < strlen(haystack); i++) {
        unsigned int j = 0;
        while (j < strlen(needle) && haystack[i + j] == needle[j]) {
            j++;
        }
        if (j == strlen(needle)) {
            return (int)i;
        }
    }
    return -1;
}




int main(){
     char haystack[50]={"mississippi"};
     char needle[50]={"issip"};
    int retorno=strStr(haystack, needle);
    printf("%d", retorno);

    return 0;
}