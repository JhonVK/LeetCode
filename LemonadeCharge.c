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