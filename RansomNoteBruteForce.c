bool canConstruct(char* ransomNote, char* magazine) {
    int lenMaga=strlen(magazine);
    int lenRans=strlen(ransomNote);
    int alreadyUsed[lenMaga];
    
    for(int i = 0; i < lenMaga; i++) {
        alreadyUsed[i] = -1;
    }

    int k=0;
    int aux=0, aux1=0;
    for(int i=0; i<lenRans; i++){
        for(int j=0; j<lenMaga; j++){
            for(int l=0; l<lenMaga; l++){
                if(alreadyUsed[l]==j){
                aux1=-1;  
                }
            }
            if(aux1!=-1 && ransomNote[i]==magazine[j]){
                aux=1;
                alreadyUsed[k]=j;
                k++;
                break;
            }else{
                aux1=0;
            }
        }
        if(aux!=1){
            return false;
        }
        aux=0;
        
    }
    return true;
}