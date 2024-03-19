class Solution {
public:
    int search(string pat, string txt) {
        int length=pat.size();
        int text_len=txt.size();
        unordered_map<char, int> freq;
        for (char c : pat){
            freq[c]++;
        }

        int count = length;
        int L = 0, R = 0;
        int ans = 0;

        while (R < text_len) {
            if (freq.find(txt[R]) != freq.end() && freq[txt[R]] > 0) {
                count--;
            }
            freq[txt[R]]--;
            R++;

            if (count == 0) {
                ans++;
            }
            
            if (R - L == length) {
                freq[txt[L]]++;
                if (freq[txt[L]] > 0) {
                    count++;
                }
                L++;
            }
        }
        
        return ans;
    }
};
