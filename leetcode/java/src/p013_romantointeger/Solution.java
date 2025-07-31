package p013_romantointeger;

import java.util.HashMap;
import java.util.Map;

class Solution {
    public int romanToInt(String s) {
        Map<Character, Integer> RomInt = new HashMap<>();
        RomInt.put('I', 1);
        RomInt.put('V', 5);
        RomInt.put('X', 10);
        RomInt.put('L', 50);
        RomInt.put('C', 100);
        RomInt.put('D', 500);
        RomInt.put('M', 1000);

        int soma = 0;

        for(int i = 0; i < s.length(); ++i){
            int numAtual = RomInt.get(s.charAt(i));
            int numProx = ((i + 1) < s.length()) ? RomInt.get(s.charAt(i + 1)) : 0;

            soma = (numAtual < numProx) ? soma - numAtual : soma + numAtual;
        }

        return soma;

    }
}