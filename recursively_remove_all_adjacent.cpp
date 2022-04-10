// CODE BY : AJAY PAL , IIT (BHU)
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

// GFG Solution
string remove(string s)
{
    string res = "";
    int i = 0;
    while (i < s.length())
    {
        char ch = s[i];
        int freq = 0;
        while (ch == s[i])
        {
            freq++;
            i++;  
        }
        if (freq == 1)
        {
            res += ch;
        }
    }
    if (res == s)
    {
        return res;
    }

    return remove(res);
}

// Leetcode solution
string removeDuplicates(string s)
{
    int n = s.size();
    string res = "";

    int i = 0;
    while (i < n)
    {
        if (i < n and s[i] == res.back())
        {
            res.pop_back();
            i++;
        }
        else
        {
            res.push_back(s[i]);
            i++;
        }
    }

    return res;
}
