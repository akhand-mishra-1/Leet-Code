class Solution {
public:
    int vowelConsonantScore(string s) {
        int v = 0, c = 0;

        for(int i = 0; i < s.length(); i++) {
            char ch = tolower(s[i]);

            if(ch >= 'a' && ch <= 'z') {
                if(ch == 'a' || ch == 'e' || ch == 'i' || 
                   ch == 'o' || ch == 'u')
                    v++;
                else
                    c++;
            }
        }

        if(c > 0)
            return v / c;  
        else
            return 0;
    }
};
