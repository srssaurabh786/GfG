class Solution {
  public:
    int findSubarray(vector<int> &arr) {
        // code here.
        int total=0;
        int n=arr.size();
        unordered_map<int,int>m;
        int prefixSum=0;
        
        //initalise map by 0:1
        m[0]=1;
        
        for(int i=0;i<n;i++)
        {
            prefixSum+=arr[i];
            if(m.count(prefixSum))
            {
                total+=m[prefixSum];
                m[prefixSum]++;
            }
            else
            {
                m[prefixSum]=1;
            }
        }
        return total;
    }
};