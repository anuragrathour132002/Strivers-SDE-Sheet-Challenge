#include <bits/stdc++.h>

pair<int, int> missingAndRepeating(vector<int> &A, int n)
{

    pair<int, int> ans;
    long long int len = n;

    long long int S = (len * (len + 1)) / 2;
    long long int P = (len * (len + 1) * (2 * len + 1)) / 6;
    long long int missingNumber = 0, repeating = 0;
    for (int i = 0; i < A.size(); i++)
    {
        S -= (long long int)A[i];
        P -= (long long int)A[i] * (long long int)A[i];
    }

    missingNumber = (S + P / S) / 2;

    repeating = missingNumber - S;

    ans.first = missingNumber;
    ans.second = repeating;
    return ans;
}