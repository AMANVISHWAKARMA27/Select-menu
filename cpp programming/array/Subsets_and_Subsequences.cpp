#include <iostream>
#include <vector>
using namespace std;

void solve(vector<int> nums, vector<int> output, int index, vector<vector<int>> &ans)
{
    // base case
    if (index >= nums.size())
    {
        ans.push_back(output);
        return;
    }

    // exclude
    solve(nums, output, index + 1, ans);

    // include
    int element = nums[index];
    output.push_back(element);
    solve(nums, output, index + 1, ans);
}

void printSubsequences(string input, string output)
{
    // Base case: input is empty
    if (input.empty())
    {
        // Print the output
        cout << output << " ";
        return;
    }

    // Recursive case: input is not empty
    // Exclude the first character of input and call the function
    printSubsequences(input.substr(1), output);

    // Include the first character of input and call the function
    printSubsequences(input.substr(1), output + input[0]);
}


int main()
{

    //--------------------------SUBSETS-----------------------------//
    // vector<int> data{1, 2, 3};
    // vector<vector<int> > ans;
    // vector<int> output;
    // int index = 0;
    // solve(data, output, index, ans);

    // for (auto subset : ans) {
    //     cout << "{";
    //     for (int i = 0; i < subset.size(); i++) {
    //         cout << subset[i];
    //         if (i < subset.size() - 1) {
    //             cout << ", ";
    //         }
    //     }
    //     cout << "}" << " ";
    // }

    //------------------------SUBSEQUENCES--------------------------//
    // string input = "abc";
    // string output = "";
    // printSubsequences(input, output);


    return 0;
}
