int addDigits(int num) {
    do{
        num=num%10+(num-(num%10))/10;
    }while(num>=10);
return num;
}