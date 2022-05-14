int sum(int input[], int n) {
 if(n==1){
     return input[0];
 }
    int add = sum (input+1, n-1);
    return (*input) + add ;
    
}
