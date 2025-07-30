package p009_palindromenumber;

public class Solution {
    public boolean isPalindrome(int x) {
        if(x < 0 || (x % 10 == 0 && x != 0))
            return false;

        int numReverso = 0;

        while(x > numReverso){
            numReverso = (numReverso * 10) + (x % 10);
            x /= 10;
        }

        return x == numReverso || x == numReverso / 10;
    }
}