// Implement pow(x, n), which calculates x raised to the power n (i.e., xn).

// Example 1:
// Input: x = 3.00000, n = 5
// Output: 243.00000


class Solution {
public:
    double myPow(double x, int n) {
        long binform = n;                //O(logn)
        if(n<0){                         //Negative power ko positive
            x=1/x;
            binform = -binform;
        }

        double ans = 1;
        while(binform>0){             5,2,1
            if(binform % 2 ==1){      1==1,0==1,1%2==1(yes)
                ans *= x;             ans=3,none,ans=243
            }
            x *= x;                   x=9,x=81,x=81*81
            binform /= 2;             binform=(5/2=2(qutionent)),binform=(2/2=1),b=(1/2=0)
        }
        return ans;                   243.
    }
};




// This is the key idea behind binary exponentiation: we use the powers of 2 and selectively multiply
//  only where the corresponding binary bit is 1.

// By using the binary representation of n, the algorithm minimizes the number of multiplications, 
// resulting in a more efficient solution compared to simple repeated multiplication.






