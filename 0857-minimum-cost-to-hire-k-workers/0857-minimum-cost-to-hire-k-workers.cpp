class Solution {
public:
    double mincostToHireWorkers(vector<int>& quality, vector<int>& wage, int k) {
        int n = wage.size();
        vector<pair<double, double>> v;
        for(int i=0; i<n; i++) {
            double r = (double) wage[i] / quality[i];
            v.push_back({r, (double) quality[i]});
        }
        sort(v.begin(), v.end());

        priority_queue<double> pq;
        double qs = 0, ans = DBL_MAX;
        for(int i=0; i<n; i++) {
            qs += v[i].second;
            pq.push(v[i].second);
            if(pq.size() > k) qs -= pq.top(), pq.pop();
            if(pq.size() == k) ans = min(ans, qs * v[i].first);
        }
        return ans;
    }
};