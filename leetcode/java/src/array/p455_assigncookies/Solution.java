package array.p455_assigncookies;

public class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);

        int ptrChild = 0;
        int ptrCookie = 0;

        while(ptrChild < g.length && ptrCookie < s.length){
            if(s[ptrCookie] >= g[ptrChild]){
                ptrChild++;
            }

            ptrCookie++;
        }

        return ptrChild;
    }
}
