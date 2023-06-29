class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        /*int size = digits.size();
        long long int oldNum = 0;
        for(int i = 0; i<size; i++){
            oldNum = oldNum*10 + digits[i];
        }
        long long int newNum = oldNum + 1;

        vector<int> newDigits;
        int digit;
        while(newNum != 0){
            digit = newNum % 10;
            newDigits.insert(newDigits.begin(), digit);
            newNum = newNum / 10;
        }
        return newDigits;
        */
        int size = digits.size();
        int carry = 1;
        int newDigit;
        for(int i=size-1; i>=0; i--){
            newDigit = digits[i] + carry;
            if(newDigit/10 != 0){
                digits[i] = newDigit % 10;
                carry = 1;
                if(i == 0){
                    digits.insert(digits.begin(),1);
                }
            }
            else{
                digits[i] = newDigit;
                carry = 0;
            }
        }
        return digits;
    }
};