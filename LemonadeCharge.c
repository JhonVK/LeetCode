#include <stdbool.h>
#include <stdio.h>
bool lemonadeChange(int* bills, int billsSize) {
int cash_5=0, cash_10=0;

    for(int i=0; i<billsSize; i++){
        if(bills[i]==5){
            cash_5++;
        }else if(bills[i]==10){
            if(cash_5>0){
                cash_10++;
                cash_5--;
            }else{
                return false;
            }
        }else if(bills[i]==20){
            if(cash_10>0 && cash_5>0){
                cash_10--;
                cash_5--;
            }else if(cash_5>2){
                cash_5=cash_5-3;
            }else{
                return false;
            }   
        }
    }
    return true;
}

int main() {
    // Exemplo de uso da função
    int bills[] = {5, 10, 20, 5, 5};
    int size = sizeof(bills) / sizeof(bills[0]);
    bool result = lemonadeChange(bills, size);
    if (result) {
        printf("e possivel dar o troco .\n");
    } else {
        printf("Nao e possivel dar o troco.\n");
    }
    return 0;
}