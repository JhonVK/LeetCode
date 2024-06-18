char * addBinary(char * a, char * b){
    int sizeA=strlen(a), sizeB=strlen(b);
    int sizeOutput;
    if(sizeA>sizeB){
       sizeOutput=sizeA+1;
    }else{sizeOutput=sizeB+1;}
    
    char * res = (char *)malloc(sizeOutput + 1);
    int sum = 0;
    
    res[sizeOutput] = '\0';
    
    while(sizeA > 0 || sizeB > 0 || sum > 0) {
        
        if(sizeA > 0) {
            sum += a[--sizeA] - '0';
        }
        if(sizeB > 0) {
            sum += b[--sizeB] - '0';
        }
        res[--sizeOutput] = sum % 2 + '0';
        sum /= 2;
    }
    return res + sizeOutput;   
}