int majorityElement(int* nums, int numsSize) {
    int count=0, countPas=0, element, j=0, pass=0;
    int *testedNum=NULL;

    for(int i=0; i<numsSize; i++){
        for(int k=0; k<j; k++){
            if(nums[i]==testedNum[k]){
                pass=-1;
            }
        }
        if(pass!=-1){
            for(int j=0; j<numsSize; j++){
            if(nums[i]==nums[j]){
                count++;
                }
            }
            if(count>countPas){
                j++;
                testedNum=(int *)realloc(testedNum, j*sizeof(int));
                testedNum[j-1]=nums[i]; 
                element=nums[i];
                }
            if(count>numsSize/2){
                return element;
            }
            countPas=count;
            count=0;
            
        }
            pass=0;
        
    
    }
    return element;
}