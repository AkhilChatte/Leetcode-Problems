class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum = 0, prod = 1;

        while(n != 0){

            int r = n%10;
            sum = sum + r;
            prod = prod * r;
            n = n/10;
        }
        int ans = prod - sum;
        return ans;
    }
};