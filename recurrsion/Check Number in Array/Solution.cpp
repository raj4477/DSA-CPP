bool checkNumber(int input[], int size, int x) {
  if(size == 0 ){
      return false;
  }
  bool contain = (*input)==x;
    
    
    bool has = checkNumber(input +1 , size -1 , x);
     return has || contain;

}
