class Solution {
   public:
    static bool cmp(Interval& a, Interval& b) { return a.start < b.start; }

    bool canAttendMeetings(vector<Interval>& intervals) {
        if(intervals.size()<=1) return true;
        sort(intervals.begin(), intervals.end(), cmp);

        for (int i = 0; i < intervals.size() - 1; i++) {
            if (intervals[i].end > intervals[i + 1].start) {
                return false;
            }
        }

        return true;
    }
};