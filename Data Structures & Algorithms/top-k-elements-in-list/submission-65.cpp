class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> count;

        for(int num : nums)
            count[num]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        vector<int> res;

        for(const auto& entry : count) {
            heap.push({entry.second, entry.first});
            if(heap.size() > k)
                heap.pop();
        }

        for(int j = 0; j < k; j++) {
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;
    }
};
