/**
 * Definition of Interval:
 * class Interval {
 * public:
 *     int start, end;
 *     Interval(int start, int end) {
 *         this->start = start;
 *         this->end = end;
 *     }
 * }
 */

class Solution {
public:
    int minMeetingRooms(vector<Interval>& intervals) {
        vector<int> s;
        vector<int> e;
        for(auto &it : intervals ){
            s.push_back(it.start);
            e.push_back(it.end);
        }
        sort(s.begin(),s.end());
        sort(e.begin(),e.end());
        int n = s.size();

        int i=0 ;
        int j=0;
        int ans=0;
        int cnt=0;
        while(i<n && j<n){
            if(s[i]<e[j]){
                cnt++;
                ans=max(ans,cnt);
                i++;
            }
            else{
                cnt--;
                j++;
            }
        }
    return ans;
    }
};
