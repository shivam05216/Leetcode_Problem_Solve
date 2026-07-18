class Solution {
public:
    bool isPalindrome(int x){
    
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;

        // Reverse only half of the number
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // Check for even length OR odd length
        return (x == reversedHalf || x == reversedHalf / 10);
    
    }
};
      