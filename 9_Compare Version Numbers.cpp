class Solution {
public:
    int compareVersion(string version1, string version2) {
         int l1 = 0, l2 = 0;
        while(l1 < version1.size() || l2 < version2.size()) {
            string d1 = "0", d2 = "0";
            while(l1 < version1.size()  && version1.at(l1) != '.') 
                d1.push_back(version1.at(l1++));
            while(l2 < version2.size()  && version2.at(l2) != '.') 
                d2.push_back(version2.at(l2++));
            if (stoi(d1) > stoi(d2)) 
                return 1;
            else if (stoi(d1) < stoi(d2)) 
                return -1;
            l1++;
            l2++;
        }
        return 0;
    }
};
