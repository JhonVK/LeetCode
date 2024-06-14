/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shortestToChar(char* s, char c, int* returnSize) {

    *returnSize=strlen(s);
    int* res = malloc(strlen(s)*sizeof(int));
    for(int i=0; i<strlen(s); i++){
        int menor=1000;
        for(int j=0; j<strlen(s); j++){
            if(s[j]==c && abs(i-j)<menor){
            menor=abs(i-j);
            }
        }
        res[i]=menor;
    }
    return res;
    
}