

bool isPalindrome(int x){
    unsigned int rev=0;
    int temp,k=x;
    if(x<0)
    {
        return false;
    }
    else
   {
    while(x)
    {
        temp=x%10;
        rev=temp+rev*10;
        x=x/10;
    }
    }
    if( rev == k)
    {
        return true;
    }
    else
    {
        return false;
    }
    

}

