class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int, int> count;

        for(int num : nums)
            count[num]++;

        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        vector<int> result;

        for(auto& entry : count) {
            heap.push({entry.second, entry.first});
            if(heap.size() > k)
                heap.pop();
        }


        for(int i = 0; i < k; i++) {
            result.push_back(heap.top().second);
            heap.pop();
        }
        

        return result;
    }
};
