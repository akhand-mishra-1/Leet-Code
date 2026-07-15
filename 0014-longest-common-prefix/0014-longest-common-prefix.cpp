class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
  string start=strs[0];
  string str="";
  vector<string> vec2;
  
  for(int i=0;i<strs.size();i++)
  {
      for(int j=0;j<start.length()&& strs[i].length();j++)
      {
          if(start[j]==strs[i][j])
          {
              str+=start[j];
              
            }
            else
            {
                break;
            }
        }
        vec2.push_back(str);
        str.erase();
  }
    string smallest = vec2[0];
        for (string s : vec2) {
            if (s.length() < smallest.length()) {
                smallest = s;
            }
        }

// cout<<smallest;
return smallest;

        
    }
};