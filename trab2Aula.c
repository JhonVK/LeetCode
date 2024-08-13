//o código funciona mas falha no caso 57 pois passa do tempo limite, testei o caso no testcase e deu certo, mas o tempo é ridiculamente alto no caso de um grande dado, 1000ms
int maximumGain(char* s, int x, int y) {
    
   int maior=0;

   int tamanhoString=strlen(s);
   if(x>y){
 
    for(int i=0; i<tamanhoString; i++){
        if((s[i]=='a' && s[i+1]=='b')){
            for(int j=i; j<tamanhoString-1; j++){
                s[j]=s[j+2];
            }
            if(i>=2){
                i-=2;
            }else{
                i=-1;
            }
            tamanhoString-=2;
            maior+=x;
        }
      }
    for(int i=0; i<tamanhoString; i++){
        if((s[i]=='b' && s[i+1]=='a')){
            for(int j=i; j<tamanhoString-1; j++){
                s[j]=s[j+2];
            }
            if(i>=2){
                i-=2;
            }else{
                i=-1;
            }
            tamanhoString-=2;
            maior+=y;
            }
        }
         return maior;  
    }else if(y>x){
    for(int i=0; i<tamanhoString; i++){
        if((s[i]=='b' && s[i+1]=='a')){
            for(int j=i; j<tamanhoString-1; j++){
                s[j]=s[j+2];
            }
            if(i>=2){
                i-=2;
            }else{
                i=-1;
            }
            tamanhoString-=2;
            maior+=y;
        }
      }
    for(int i=0; i<tamanhoString; i++){
        if((s[i]=='a' && s[i+1]=='b')){
            for(int j=i; j<tamanhoString-1; j++){
                s[j]=s[j+2];
            }
            if(i>=2){
                i-=2;
            }else{
                i=-1;
            }
            tamanhoString-=2;
            maior+=x;
            }
        }
         return maior;
    }
    return 0;
}