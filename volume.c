int maxArea(int* height, int heightSize) {
int maiorVolume=0, base=0, volume=0;
for(int i=0; i<heightSize; i++){
    for(int j=i+1; j<heightSize; j++){
    base++;
      if(height[i]<=height[j]){
        volume=(height[i]*base);
        if(volume>maiorVolume){
            maiorVolume=volume;  
        }
      }else if(height[j]<=height[i]){
        volume=(height[j]*base);
        if(volume>maiorVolume){
            maiorVolume=volume;
        }
      }
    }
    base=0;
  }
  return maiorVolume;
}
#include <stdlib.h>
#include <stdio.h>
int main(){
    int tamanho=9;
    int vetor[9]={1,8,6,2,5,4,8,3,7};
    int retorno=maxArea(vetor, tamanho);

    printf("%d", retorno);
    return 0;
}