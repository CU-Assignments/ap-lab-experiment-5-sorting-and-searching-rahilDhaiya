public class Solution extends VersionControl {
    public int firstBadVersion(int n) {
        int left = 1;
        int right = n;
        
        while (left < right) {
            int mid = left + (right - left) / 2; // Prevent potential overflow
            if (isBadVersion(mid)) {
                right = mid; // Narrow search to the left half
            } else {
                left = mid + 1; // Narrow search to the right half
            }
        }
        
        // When left == right, it's the first bad version
        return left;
    }
}
Input
n =
5
bad =
4
Output
4
Expected
4
