                                              // Author: Md. Imran Ali



class Solution{
  public:
    int longestKSubstr(string s, int k) {
        int n=s.length();
        if(n==0 || k==0){
            return -1;
        }
        
        unordered_map<char, int> cnt;
        int L=0, R=0, mx_length=-1;
        
        while(R<n){
            cnt[s[R]]++;
            while(cnt.size() > k){
                cnt[s[L]]--;
                if(cnt[s[L]]== 0)
                    cnt.erase(s[L]);
                L++;
            }
            if(cnt.size()== k){
                mx_length = max(mx_length, R - L + 1);
            }
            R++;
        }
        
        return mx_length;
    }
};
