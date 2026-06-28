class Solution {
public:
    int smallestNumber(int n, int t) {
        int prod=1, temp=n;
        while(n>0) {
            prod*=n%10;
            n/=10;
        }
        n=temp;
        while(prod%t!=0) {
            int tempProd=1;
            n+=1;
            temp+=1;
            while(n>0) {
                tempProd*=n%10;
                n/=10;
            }
            n=temp;
            prod=tempProd;
        }
        return n;
    }
};