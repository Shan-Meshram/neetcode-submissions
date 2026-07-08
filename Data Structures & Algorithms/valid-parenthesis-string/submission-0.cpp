class Solution {
public:
    bool checkValidString(string s) {
        // stack<int> leftIdx;
        // stack<int> starIdx;
        int n = s.size();
        // for(int i=0;i<n;i++){
        //     if(s[i]=='('){
        //         leftIdx.push(i);
        //     }
        //     else if(s[i]=='*'){
        //         starIdx.push(i);
        //     }
        //     else{
        //         if(!leftIdx.empty()){
        //             leftIdx.pop();
        //         }
        //         else if(!starIdx.empty()){
        //             starIdx.pop();
        //         }
        //         else{
        //             return false;
        //         }

        //     }  
        // }
        // if(leftIdx.size()>starIdx.size()) return false;
        // // if(starIdx.top()<leftIdx.top()) return false;
        // while(!starIdx.empty() && !leftIdx.empty()){
        //     if(starIdx.top()<leftIdx.top()){
        //         return false;
        //     }
        //     starIdx.pop();
        //     leftIdx.pop();
        // }
        // return true;
        int minl = 0;
        int maxl = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                minl++;
                maxl++;
            }
            else if(s[i]==')'){
                if(minl) minl--;
                maxl--;
            }
            else{
                if(minl) minl--;
                maxl++;
            }
            if(maxl<0) return false;
        }
        if(maxl>=0 && minl==0) return true;
        return false;
    }
};