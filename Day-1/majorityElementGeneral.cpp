class Solution {
public:
    void majorityElementGeneral(vector<int>& nums, int k) {
        int n = nums.size();
        HashMap<int,int> map = new HashMap<>();
        for(int i=0;i<n;i++){
            if(map.containsKey(arr[i]) == true){
                map.put(arr[i], map.get(arr[i]) + 1);
            }
            else{
                map.put(arr[i], 1);
            }
        }

        vector<int> ans;
        for(int key : map.keySet()){
            if(map.get(key) > n/k){
                ans.push_back(key);
            }
        }
        return ans;
    }
};
