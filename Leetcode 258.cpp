class Solution {
public:
    int Digitsum(int n){
        int digit;
        int sum = 0;
        while(n != 0){    
            digit = n%10;
            sum = sum + digit;
            n = n/10;
        }
        return sum;
    }

    int addDigits(int num) {        
        if(num<=9 && num>=0)
            return num;
        int sum = Digitsum(num);
        while(sum > 9){
            sum = Digitsum(sum);
        }
        return sum;
    }
};