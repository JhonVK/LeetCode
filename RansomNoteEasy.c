bool canConstruct(char* ransomNote, char* magazine) {
    int letters[256] = {0}; // Array para contar as ocorrências de cada letra
    
    // Conta as ocorrências de cada letra na magazine
    for(int i = 0; magazine[i] != '\0'; i++) {
        letters[magazine[i]]++;
    }
    
    // Verifica se cada letra da ransomNote está disponível na magazine
    for(int i = 0; ransomNote[i] != '\0'; i++) {
        if(--letters[ransomNote[i]] < 0) {
            return false; // Se não houver mais dessa letra disponível, retorna falso
        }
    }
    
    return true; // Se todas as letras estiverem disponíveis, retorna verdadeiro
}
