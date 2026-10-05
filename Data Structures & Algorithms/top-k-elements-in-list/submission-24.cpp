class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // Step 1 - Count Frequencies:
        unordered_map<int, int> count;

        for(int num : nums) {
            count[num]++;
        }

        // Step 2 - Min-Heap:
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> heap;

        // Step 3 - Keep the top K
        for(auto& entry : count) {
            heap.push({entry.second, entry.first});
            if(heap.size() > k)
                heap.pop();
        }

        // Step 4 - Extract the result
        vector<int> res;
        for(int i = 0; i < k; i++) {
            res.push_back(heap.top().second);
            heap.pop();
        }

        return res;

        
    }
};
