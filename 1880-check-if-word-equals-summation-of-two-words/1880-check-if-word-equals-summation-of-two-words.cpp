class Solution {
public:
    bool isSumEqual(string firstWord, string secondWord, string targetWord) {
        int sum1=0, sum2=0, sum3=0;
        for(char ch:firstWord)
            sum1=sum1*10+(ch-'a');
        for(char ch:secondWord)
            sum2=sum2*10+(ch-'a');
        for(char ch:targetWord)
            sum3=sum3*10+(ch-'a');
        return sum3==(sum1+sum2);
    }
};