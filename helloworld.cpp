#include <bits/stdc++.h> 
#include <iostream>
#include <vector>
#include <string>
#include "../../../../msys64/ucrt64/include/c++/13.2.0/bits/algorithmfwd.h"

using namespace std;
class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> op;
        int maxCandies = *max_element(candies.begin(),candies.end());
        for(int i=0;i<candies.size();i++)
        {
            if((candies[i] + extraCandies) >= maxCandies)
            {
                op.push_back(true);
                cout<<i<<"->"<<true<<endl;
            }
            else
            {
                op.push_back(false);
                cout<<i<<"-->"<<false<<endl;
            }
        }
        return op;

    }
}s;

int main()
{
    // vector<string> msg {"Hello", "C++", "World", "from", "VS Code", "and the C++ extension!"};

    // for (const string word : msg)
    // {
    //     cout << word << " ";
    // }
    // cout << endl;
    vector<int> candies = {2,3,5,1,3};
    int extraCandies = 3;
    //Solution s;
    s.kidsWithCandies(candies,extraCandies);


}