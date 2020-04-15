/*

https://leetcode.com/explore/challenge/card/30-day-leetcoding-challenge/529/week-2/3299/

*/

class Solution 
{
public:
    string stringShift(string s, vector<vector<int>>& shift)
    {
        
        for(int i=0;i<shift.size();i++)
        {
            int m=shift[i][0];  //Direction
            int n=shift[i][1];  //No of Characters
            
            // Left Shift
            if(m == 0)
            {
                string str=s.substr(0,n);
                s.erase(0,n);
                s.append(str);
                str.erase();
            }
            
            // Right Shift
            else if(m == 1)
            {
                int l=s.length();
                string str=s.substr(l-n,l);
                s.erase(l-n,l);
                s.insert(0,str);
                str.erase();
            }

        }
    return s;
    }
};
