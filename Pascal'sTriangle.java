import java.io.*;
import java.util.* ;

import java.util.ArrayList;

public class Solution {
	public static ArrayList<ArrayList<Long>> printPascal(int n) {

		ArrayList<ArrayList<Long>> res = new ArrayList<>(n);
		ArrayList<Long> temp = new ArrayList<>(1);

		temp.add(1L);
		res.add(temp);
                 
		for(int i=1; i<n; i++) {
			ArrayList<Long> t = new ArrayList<>(i+1);
			t.add(1L);
			for(int j=1; j<=i-1; j++) {
				Long val = res.get(i-1).get(j-1) + res.get(i-1).get(j);
				t.add(val);
			}
			t.add(1L);
			res.add(t);
		}
		return res;
	}
}
