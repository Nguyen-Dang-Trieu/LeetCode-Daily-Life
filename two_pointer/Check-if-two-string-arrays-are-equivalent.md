## C++
~~~cpp
class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int w1 = 0, w2 = 0; // Chỉ số word (string) trong vector
        int p1 = 0, p2 = 0; // Chỉ số ký tự (char) trong word
        
        while (w1 < word1.size() && w2 < word2.size()) {
            // So sánh từng ký tự trong chuỗi string (word)
            if (word1[w1][p1] != word2[w2][p2]) {
                return false;
            }
            
            p1++;
            p2++;
            
            // Nếu dùng hết ký tự của từ (word) hiện tại trong word1, nhảy sang từ (word) tiếp theo
            if (p1 == word1[w1].size()) {
                w1++;   // Move lên word tiếp theo trong vector
                p1 = 0; // reset về kí tự đầu của word mới
            }

            if (p2 == word2[w2].size()) {
                w2++;
                p2 = 0;
            }
        }
        
        // Kiểm tra 2 vector có thực sự là hết word để so sánh hay chưa ? Nếu hết return true;
        return w1 == word1.size() && w2 == word2.size(); 
    }
};
~~~


## C