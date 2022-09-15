class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if (s1.size()>s2.size()) return false;
        
        int freq_s1[26]={0},freq_s2[26]={0};
        for (int i=0;i<s1.size();i++){
            int ch_no=s1[i]-'a';
            freq_s1[ch_no]++;
        }
        
        for (int i=0;i<s1.size();i++){
            int ch_no=s2[i]-'a';
            freq_s2[ch_no]++;
        }
        
        bool all_in=true;
        for (int i=0;i<26;i++){
            if (freq_s1[i]!=freq_s2[i]) all_in=false;
        }
        
        if (s1.size()==s2.size() or all_in){
            return all_in;
        }
        
        for (int st=1,en=s1.size();en<s2.size();st++,en++){
            int old_ch=s2[st-1]-'a';
            freq_s2[old_ch]--;
            int new_ch=s2[en]-'a';
            freq_s2[new_ch]++;
            all_in=true;
            for (int i=0;i<26;i++){
                if (freq_s1[i]!=freq_s2[i]) all_in=false;
            }
            if (all_in) return true;
        }
        
        return all_in; 
    }
};