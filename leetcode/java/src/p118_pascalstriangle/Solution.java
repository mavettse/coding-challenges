package p118_pascalstriangle;

import java.util.ArrayList;
import java.util.List;

class Solution {
    public List<List<Integer>> generate(int numRows) {
        if(numRows == 0)
            return new ArrayList<>();

        List<List<Integer>> triangulo = new ArrayList<>();
        triangulo.add(List.of(1));

        for(int i = 1; i < numRows; ++i){
            List<Integer> linhaAnterior = triangulo.get(i - 1);
            List<Integer> linhaAtual = new ArrayList<>();

            for(int j = 0; j <= linhaAnterior.size(); ++j){
                if(j == 0 || j == i)
                    linhaAtual.add(1);
                else
                    linhaAtual.add(linhaAnterior.get(j - 1) + linhaAnterior.get(j));
            }

            triangulo.add(linhaAtual);
        }

        return triangulo;
    }
}