package p1137_nthtribonaccinumber;

class Solution {
    public int tribonacci(int n) {
        if(n <= 0) return 0;
        if(n <= 2) return 1;

        int tAnt1 = 0;
        int tAnt2 = 1;
        int tAnt3 = 1;

        for(int i = 3; i <= n; i++){
            int tn = tAnt1 + tAnt2 + tAnt3;
            tAnt1 = tAnt2;
            tAnt2 = tAnt3;
            tAnt3 = tn;
        }

        return tAnt3;
    }
}
