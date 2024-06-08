#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int valorNumero(char c){
    switch (c)
    {
    case 'I': return 1;
    case 'V': return 5;
    case 'X': return 10;
    case 'L': return 50;
    case 'C': return 100;
    case 'D': return 500;
    case 'M': return 1000;
    default: return 0;
    }
}
int romanToInt(char* s) {
    int soma=0;
    int anterior=0;
    int atual=0;
    for(unsigned int i=0; i<strlen(s); i++){
    atual=valorNumero(s[i]);
    if(i==0){anterior=atual;}
        if(atual>anterior){
            soma=soma+atual-2*anterior;
        }else{
        soma=soma+atual;
        anterior=atual;
        
    }}
    return soma;
}
int main(){
     char *string;
    string = (char *)malloc(1000 * sizeof(char));  // aloca memória para 1000 caracteres
    printf("Digite o número romano: ");
    scanf("%s", string);
    string = realloc(string, (strlen(string) + 1) * sizeof(char));  // realoca a memória para o tamanho da string inserida
    int retorno = romanToInt(string);
    printf("Resultado: %d \n", retorno);
    free(string);
    
    return 0;
}