class Solution {
public:
    string encode(vector<string>& strs) {
        string encoded ="";
        for(string str : strs){
          encoded+=to_string(str.size())+'#'+str;
        }
       return encoded;
    }

    vector<string> decode(string s) {
        vector<string> decoded;

        int i=0;
        while(i<s.size()){
            int j = i;
            string len ="";
            while(s[j]!='#'){
                len+=s[j];
                j++;
            }
            int size = stoi(len); // size of string 
            string str = s.substr(j+1,size);
            decoded.push_back(str);
            i = size + 1 + j;
        }

       return decoded;
    }
};
