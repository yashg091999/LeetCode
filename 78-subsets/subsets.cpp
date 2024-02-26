class Solution {
public:

    void solve(vector<int>& nums,vector<vector<int>> &ans,vector<int> output,int index){
        if(index>=nums.size()){
            ans.push_back(output);
            return;
        }

        //exclude
        solve(nums,ans,output,index+1);

        //include
        output.push_back(nums[index]);
        solve(nums,ans,output,index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> output;
        int index = 0;
        solve(nums,ans,output,index);
        return ans;
    }
};