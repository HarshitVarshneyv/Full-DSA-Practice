class Solution {
public:
    int compress(vector<char>& chars) {
        int idx=0;
        int n=chars.size();
        for(int i=0;i<n;i++){
           char ch=chars[i];
           int count=0;

            while(i<n && chars[i] == ch){
                count++,i++;    
            }

            if(count == 1){
                chars[idx++] =ch; 
            }
            else{
                chars[idx++] =ch; 
                string str = to_string(count);
                for(char digi : str){
                    chars[idx++] = digi;
                }
            }
            i--;
        }
        chars.resize(idx);
        return idx;
    }
};