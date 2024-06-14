/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* findWordsContaining(char** words, int wordsSize, char x, int* returnSize) {
    int *res= malloc(sizeof(int)*wordsSize);
    int index=0;
    for(int i=0; i<wordsSize; i++){
        char *word=words[i];
        for(int j=0; j<strlen(word); j++){
            if(words[i][j]==x){
                res[index++]=i;
                break;
            }
        }
    }
    *returnSize=index;
    return res;
}