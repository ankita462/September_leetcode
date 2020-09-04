class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> res;
        vector<bool> cond(S.size(),1);
        int min, max, cnt = 0;
        for(int i = 'a';i<='z';++i){
            min = S.find_first_of(i);
            max = S.find_last_of(i);
            for(int j = min;j<max;++j)
                cond[j] = false;
        }
        for(bool b : cond){
            cnt++;
            if(b){
                res.push_back(cnt);
                cnt = 0;
            }   
        }
        return res;
    }
};
