package p509_fibonaccinumber;

class Solution {
    public int fib(int n) {
        if(n <= 0)
            return 0;

        int fib1 = 1;
        int fib2 = 0;

        for(int i = 1; i < n; ++i){
            int fibn = fib1 + fib2;
            fib2 = fib1;
            fib1 = fibn;
        }

        return fib1;
    }
}
