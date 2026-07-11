class Solution {
public:
    int firstUniqChar(string s) {
       
    //    vector<char>vec(256,0);  why its not use becuse char store -128 to 127(signed) and 0-255 (un signed ) so its why i am use int vector it can stores up to 2,147,483,647 bit
    vector<int>vec(26,0); 

       for(int i=0;i<s.length();i++)
       {
        vec[s[i]-'a']++;
       }
       for(int i=0;i<s.length();i++)
       {
        if(vec[s[i]-'a']==1)
        {
            return i;
            // break;
        }
       }
       return -1;
    }
};