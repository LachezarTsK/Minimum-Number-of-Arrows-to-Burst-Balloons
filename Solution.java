
import java.util.Arrays;

public class Solution {

    public int findMinArrowShots(int[][] points) {
        
        //values are from min to max integer and could cause integer overflow if only (x[1]-y[1]) is applied.
        Arrays.sort(points, (x, y) -> (x[1] < y[1]) ? -1 : (x[1] > y[1]) ? 1 : 0);

        int arrows = 1;
        int minEnd = points[0][1];
        int size = points.length;

        for (int i = 1; i < size; i++) {
            if (points[i][0] > minEnd) {
                minEnd = points[i][1];
                arrows++;
            }
        }
        return arrows;
    }
}
