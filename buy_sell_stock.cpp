#include <bits/stdc++.h>

int maximumProfit(vector<int> &prices)
{

    int min = prices[0];

    int profit = 0;

    for (int i = 0; i < prices.size(); i++)

    {

        if (prices[i] < min)

            min = prices[i];

        else if (prices[i] - min > profit)

        {

            profit = prices[i] - min;
        }
    }

    return profit;
}