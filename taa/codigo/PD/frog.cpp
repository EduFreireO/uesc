#include <bits/stdc++.h> 
using namespace std;
int frogJump(int n, vector<int> &heights)
{
    int v[n + 1];
    int tam  = heights.size();

    v[0] = heights[0];
    v[1] = fdim(heights[0], heights[1]);
    
}