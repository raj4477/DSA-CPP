void print(int n){
//     for(int i = 1 ; i<=n; i++ ){
//         cout<<i<<" ";
//     }
    if(n==0){
        return ;
    }
    print(n-1);
    cout<<n<<" ";
}
