Problem: [Robot-Return-to-Origin](https://leetcode.com/problems/robot-return-to-origin/description/?envType=problem-list-v2&envId=w5s9pzgi)

## CPP

```cpp
    bool judgeCircle(string moves) {
        int x = 0, y = 0;
        for (char m : moves) {
            if (m == 'U') y++;
            else if (m == 'D') y--;
            else if (m == 'L') x--;
            else if (m == 'R') x++;
        }
    return x == 0 && y == 0;
    }
```
