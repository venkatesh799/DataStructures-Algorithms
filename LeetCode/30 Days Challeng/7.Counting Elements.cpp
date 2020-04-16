/* 
Solution
Given an integer array arr, count element x such that x + 1 is also in arr.

If there're duplicates in arr, count them seperately.
*/
class Solution {
public:
    int countElements(vector<int>& arr) {
        int n = arr.size(),ans=0,x;
        if(n<=1)
            return 0;
        
        sort(arr.begin(),arr.end());
        for(int i=0;i<n;i++)
        {
            x=arr[i];
            for(int j=i+1;j<n;j++)
            {
                if(x+1 == arr[j])
                {
                    ans+=1;
                    break;
                }
            }
        }
    return ans;
        
        
    }
};
