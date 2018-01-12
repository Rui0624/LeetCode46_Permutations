//
//  main.cpp
//  LeetCode46_Permutations
//
//  Created by Rui on 1/11/18.
//  Copyright © 2018 Rui. All rights reserved.
//

#include <iostream>

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}


class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> res; //create an array to store results
        int n = nums.size();
        vector<int> visited(n, 0); //create an array to store the visited info
        vector<int> out; //create an array to store the possible permutations
        permutationsDFS(nums, 0, visited, out, res);
        
        return res;
    
    }
    
    void permutationsDFS(vector<int>& nums, int level, vector<int>& visited, vector<int>& out vector<vector<int>>& res)
    {
        if(level == nums.size()) // if level == 0, we've already found the one of the permutation
            res.push_back(out);//push the permutation into the result
        else
        {
            for(int i = 0; i < nums.size(); i++)
            {
                if(visited[i] == 0)//if the visitied[i] == 0, the number is not visited in this loop
                {
                    visited[i] = 1;//make the number visited
                    out.push_back(nums[i]);//push the number into the out
                    permutationsDFS(nums, level + 1, visited, out, res);//recursion
                    out.pop_back();//pop this number from the out
                    visited[i] = 0;//make the visited value return back to 0
                }
            }
        }
    }
};
