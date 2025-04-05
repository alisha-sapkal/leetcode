class Solution {
public:
    int divide(int dividend, int divisor) {
        long long d = dividend, di = divisor;
        if(di == 0){
            throw runtime_error("math error");
        }
        if(d/di >= 2147483648) return 2147483647;
        return d/di;
    }
};