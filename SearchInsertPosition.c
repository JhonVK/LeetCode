//mt facil
int searchInsert(int* nums, int numsSize, int target) {
int posicReal=0;
for(int i=0; i<numsSize;i++){
    if(nums[i]==target){
        return i;
    }
    if(nums[i]<target){
        posicReal++;
    }
 }
return posicReal;
}