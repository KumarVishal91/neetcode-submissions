class KthLargest {
   public:
    int a;
    priority_queue<int, vector<int>, greater<int>> pq;
    KthLargest(int k, vector<int>& nums) {
        a = k;
        for (int i = 0; i < nums.size(); i++) {
            if (i < a) {
                pq.push(nums[i]);
            } else {
                if (pq.top() < nums[i]) {
                    pq.pop();
                    pq.push(nums[i]);
                }
            }
        }
    }

    int add(int val) {
        if (pq.size()<a) {
            pq.push(val);
        } else {
            if (pq.top() < val) {
                pq.pop();
                pq.push(val);
            }
        }

        return pq.top();
    }
};
