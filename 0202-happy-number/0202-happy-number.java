class Solution {
    public boolean isHappy(int n) {
      int slow=square(n);
      int fast=square(square(n));
      while(slow!=fast)
      {
        slow=square(slow);
        fast=square(square(fast));
        if(slow==1|| fast==1)
        {
            return true;
        }
      }
      return slow==1;
    }
      public int square(int num)
      {
        int ans=0;
        while(num>0)
        {
            int x=num%10;
             ans+= x * x;
            num/=10;
        }
        return ans;
      }
}