class Solution {
public:
    bool isCircularSentence(string sentence) {
        int n = sentence.size();
        for(int i = 0; i < n; i++) {
            char current = sentence[i];
            if(i == n - 1) {
                if(current != sentence[0]) return false;
                else break;
            }

            if(current == ' ' && sentence[i + 1] != sentence[i - 1])
                return false;
        }
        return true;
    }
};