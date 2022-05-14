int power(int x, int n) {
 if(n==1){
     return x;
    
 }
    if(n==0){
        return 1;
    }
    if(x==0){
        return 0;
    }
    return x * power(x,n-1);
    
}
