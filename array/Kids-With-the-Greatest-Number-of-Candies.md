Problem: [Kids With the Greatest Number of Candies](https://leetcode.com/problems/kids-with-the-greatest-number-of-candies/description/?envType=problem-list-v2&envId=w5s9pzgi)

## Solutions
### CPP
~~~cpp
std::vector<bool> kidsWithCandies(std::vector<int> &candies, int extraCandies)
{
    std::vector<bool> result(candies.size(), false);

    int maxCandies = 0;
    for (auto i = 0; i < candies.size(); i++)
    {
        if (candies[i] > maxCandies)
        {
            maxCandies = candies[i];
        }
        candies[i] = candies[i] + extraCandies;
    }

    for (auto i = 0; i < candies.size(); i++)
    {
        if (candies[i] >= maxCandies)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }

    return result;
}
~~~

### C