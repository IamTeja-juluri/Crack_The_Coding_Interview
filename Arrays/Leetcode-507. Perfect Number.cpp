class Solution {
public:
    bool checkPerfectNumber(int num) {
        
        if(num==1)
            return false;
        int s=1;
        int x=num;
      
        for(int i=2;i*i<=num;i++){
            if((num%i)==0)
                s=s+i+(num/i);
        }
  
        return s==x;   
    }
};
