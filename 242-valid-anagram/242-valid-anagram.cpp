class Solution {
public:
    bool isAnagram(string s, string t) {
        
        int freqs[26],freqt[26];
        memset(freqs,0,sizeof freqs);
        memset(freqt,0,sizeof freqt);
        
        for (int i=0;i<s.size();i++){
            freqs[s[i]-'a']++;
        }
        for (int i=0;i<t.size();i++){
            freqt[t[i]-'a']++;
        }
        
        for (int i=0;i<26;i++){
            if (freqs[i]!=freqt[i])
                return false;
            
        }
        
        return true;
    }
};