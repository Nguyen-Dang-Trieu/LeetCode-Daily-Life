Problem: [Valid Parenthese](https://leetcode.com/problems/valid-parentheses/description/?envType=problem-list-v2&envId=w5s9pzgi)

## CPP

```cpp
bool isValid(string s) {
    stack<char> st;

    for(int i = 0; i < s.size(); i++) {
        char c = s[i];

        if(c == '{' || c == '(' || c == '[') {
            st.push(c);
        }
        else  // dấu ngoặc đóng
        {
            // Nếu là dấu ngoặc đóng mà stack rỗng => false
            if(st.empty()) return false;

            char top = st.top();
            if(c == '}' && top == '{' ||
                c == ')' && top == '(' ||
                c == ']' && top == '[')
            {
                st.pop();
            }
            else {
                    return false; // VD: "( ] )""
            }
        }
    }

    return st.empty(); // Stack rỗng chuỗi mới hợp lệ
}
```
