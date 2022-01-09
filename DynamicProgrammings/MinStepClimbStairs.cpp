#include <vector>
#include <iostream>
using namespace std;

/*
Input: cost = [10, 15, 20][0]<- final step
Output : 15
Explanation : You will start at index 1.
- Pay 15 and climb two steps to reach the top.
The total cost is 15.
*/


class MinStepClimbStairs
{
public:
    int minCostClimbingStairs(vector<int>& cost) {

        //DP Approach - O(n)
        //solving the indexes from left side by adding 1 or 2 steps & choosing the minimum of it

        int n, m = 0;
        cost.push_back(0);
        for (int i = cost.size() - 3;i >= 0;i--)
        {
            n = cost[i] + cost[i + 2];
            m = cost[i] + cost[i + 1];
            cost[i] = (n < m) ? n : m;
        }
        return cost[0] < cost[1] ? cost[0] : cost[1];
    }
};
