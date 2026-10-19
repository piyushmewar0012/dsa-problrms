class Solution {
public:
    int addDigits(int num) {
        int ld ,sum=0,n=0,s=0;
        {
        while(num!=0)
        {
           ld=num%10;
           sum+=ld;
           num/=10; 
        }
        while(sum!=0)
        {
            ld=sum%10;
            n+=ld;
            sum/=10;
        }
        if(n<10)
        {
            return n;
        }
        while(n!=0)
        {
            ld=n%10;
            s+=ld;
            n/=10;
        }
        }
        
        return s;
    }
};