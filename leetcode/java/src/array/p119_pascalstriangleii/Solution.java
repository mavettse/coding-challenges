package p119_pascalstriangleii;

import java.util.ArrayList;
import java.util.List;

public class Solution {
    public List<Integer> getRow(int rowIndex) {
        if(rowIndex < 0){
            return new ArrayList<Integer>();
        }

        List<Integer> row = new ArrayList<>();
        row.add(1);

        for(int i = 1; i <= rowIndex; ++i){

            for(int j = i-1; j > 0; --j){
                int sum = row.get(j-1) + row.get(j);
                row.set(j, sum);
            }

            row.add(1);
        }

        return row;
    }
}
