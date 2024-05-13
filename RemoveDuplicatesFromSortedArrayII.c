int removeDuplicates(int *nums, int numsSize) {
    if (numsSize==0)
        return 0;
    int tamanhoAtual=numsSize, duplicados=0;

    for(int i=1; i<tamanhoAtual; i++){
        if(nums[i]==nums[i-1]){
            duplicados++;
        }else{
            duplicados=0;
        }
        if(duplicados==2){
            for(int j=i; j<tamanhoAtual-1; j++){
                nums[j]=nums[j+1];
            }
            tamanhoAtual--;
            duplicados=1;
            i--;
        }
    }
    return tamanhoAtual;
}