class Solution {
public:
    int titleToNumber(string s) {
        int n =s.length();   
        int i,j,sum=0;
        j=0;
            for(i=n-1;i>=0;i--){
                sum += (s[i]-64) * pow(26,j);
                j++;
            }
        return sum;
    }
};
