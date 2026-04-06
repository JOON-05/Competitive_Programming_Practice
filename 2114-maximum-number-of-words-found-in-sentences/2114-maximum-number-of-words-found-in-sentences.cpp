class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords=0;
        for(const string& s: sentences){
            int spaces=0;
            for(char c:s){
                if(c==' '){
                    spaces++;
                }
            }
            int currentWordCount= spaces+1;
            if(currentWordCount>maxWords){
                maxWords=currentWordCount;
            }
        }
        return maxWords;
    }
};