package p070_climbingstairs;

public class Solution {
    public int climbStairs(int n) {
        if(n <= 1)
            return 1;

        int passo1Ant = 2;
        int passo2Ant = 1;

        for (int i = 3; i <= n; ++i) {
            int passoAtual = passo1Ant + passo2Ant;
            passo2Ant = passo1Ant;
            passo1Ant = passoAtual;
        }

        return passo1Ant;
    }
}