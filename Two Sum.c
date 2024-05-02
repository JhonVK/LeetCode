
int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    for(int i=0; i<numsSize; i++){
        for(int j=i+1; j<numsSize; j++){
            if((nums[i]+nums[j])==target){
                int *retorno= malloc(sizeof(int)*2);
                retorno[0]=i;
                retorno[1]=j;
                *returnSize=2;
                return retorno;
            }

        }
    }
    return 0;
}