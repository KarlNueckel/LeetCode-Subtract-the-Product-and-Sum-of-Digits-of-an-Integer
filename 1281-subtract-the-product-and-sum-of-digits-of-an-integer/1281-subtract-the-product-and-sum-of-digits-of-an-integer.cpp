class Solution {
public:
    int subtractProductAndSum(int n) {
        vector <int> digits; 
        int digit;
        int sum = 0;//sum is one for addition
        int product = 1;//product is 1 for multiplication
        
        while(n != 0){
            digit = n%10; //extract a singular digit
            
            digits.push_back(digit);
            
            n = n/10; //decrease size of n
        }
        
        for (int i = 0; i < digits.size(); i++){
            product = product*digits[i];
            sum = sum + digits[i];
        }
        
        
        return product-sum;
    }
};