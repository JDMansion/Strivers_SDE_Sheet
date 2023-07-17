import java.util.ArrayList;
import java.util.Collections;
import java.util.Comparator;
import java.util.List;

// class Activity {
//     int start;
//     int end;

//     Activity(int start, int end) {
//         this.start = start;
//         this.end = end;
//     }
// }

// class comp implements Comoparator<Activity> {
//     public int compare(Activity a, Activity b) {
//         return a.end - b.end;
//     }
// }

public class Solution {
    public static int maximumActivities(List<Integer> start, List<Integer> end) {
        List<int[]> activities = new ArrayList<int[]>(start.size());

        for(int i=0; i<start.size(); i++) {
            activities.add(new int[] {start.get(i), end.get(i)});
        }

        activities.sort(new Comparator<int[]>() {
            @Override
            public int compare(int[] a1, int[] a2) {
                return a1[1] - a2[1];
            }
        });
        int count = 0;
        int endTime = 0;
        for(int[] activity : activities) {
            if(activity[0] >= endTime) {
                count++;
                endTime = activity[1];
            }
        }
        return count;
    }
}
