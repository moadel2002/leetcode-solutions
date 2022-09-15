class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        
        int s1_size=s1.size(),s2_size=s2.size();
        if (s1_size>s2_size) return false;
        int freq_s1[26]={0};
        unordered_map<int,unordered_map<int,int>> freq_s2;

        for (int i=0;i<s1_size;i++){
            int ch_no=s1[i]-'a';
            freq_s1[ch_no]++;
        }

        for (int i=1;i<=s2_size;i++){
            int ch_no=s2[i-1]-'a';
            for (int ch=0;ch<26;ch++){
                freq_s2[ch][i] = freq_s2[ch][i-1];
            }
            freq_s2[ch_no][i] = freq_s2[ch_no][i-1]+1;
        }

        for (int st=0,en=s1_size;en<=s2_size;st++,en++){
            bool all_found=1;
            for (int i=0;i<26;i++){
                if (freq_s2[i][en]-freq_s2[i][st]!=freq_s1[i]) all_found=0;
            }
            if (all_found) return true;
        }

        return false;
    }
};