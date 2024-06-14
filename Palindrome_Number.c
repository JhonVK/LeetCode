bool isPalindrome(int x) {
    if(x<0){
        return false;
    }
    long int rever=0, original=x;
    while(x>0){
        rever=rever*10+x%10;
        x/=10;
    }
    if(original==rever){
        return true;
    }else{
        return false;
    }
}