class Solution {
  public:
    int getHours(const vector<int>& arr, int speed) {
        int hours = 0;
        for (int bananas : arr) {
            // Equivalent to ceil(bananas / speed)
            hours += (bananas + speed - 1) / speed;
        }
        return hours;
    }

    int kokoEat(vector<int>& arr, int k) {
        int low = 1;
        int high = *max_element(arr.begin(), arr.end());
        int answer = high;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            int requiredHours = getHours(arr, mid);

            if (requiredHours <= k) {
                // Try to lower speed
                answer = mid;
                high = mid - 1;
            } else {
                // Need higher speed
                low = mid + 1;
            }
        }

        return answer;
    }
};
