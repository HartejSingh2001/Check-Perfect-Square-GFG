// Solved ques of gfg practise perfect square
class Solution {
  public:
    long long int isPerfectSquare(long long int n){
        int num=sqrt(n);
        num=floor(num);
        if(num*num == n)
        {
            return 1;
        }
        return 0;
    }
};
