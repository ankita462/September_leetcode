class Solution {
public:
    string getHint(string secret, string guess) {
         unordered_map<char, int> secret_hash;
        int bulls = 0, cows = 0;
        
        for(int i = 0; i <secret.size(); ++i) {
            if(secret[i] == guess[i]) 
                bulls++;
            else 
                secret_hash[secret[i]]++;
        }
        
        for(int i = 0; i <guess.size(); ++i) {
            if(secret_hash[guess[i]] >= 1 && guess[i] != secret[i]) {
                cows++; 
                secret_hash[guess[i]]--;
            }
        }
        
        return to_string(bulls) + "A" + to_string(cows) + "B";
    }
};
