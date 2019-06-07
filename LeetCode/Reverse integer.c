

int reverse(int x){
    int temp;
  long signed int rev=0;
    while(x)
    {
        temp=x%10;
        rev=temp+rev*10;
        if(rev > 2147483648 || rev < -2147483647)
        {
            return 0;
        }
        x=x/10;
        
    } 
       return rev;
}

