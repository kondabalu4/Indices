#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

// Create a function called twoSum that takes an array of integers and an integer target as input and returns a vector of two integers as output.

vector<int> twoSum(vector<int> &nums, int target)
{
    // Create an unordered map to store the elements of the array and their indices.
    unordered_map<int, int> seen;
// Iterate over the array.
    for (int i = 0; i < nums.size(); i++)
    {
        // Calculate the complement of the current element.
        int complement = target - nums[i];
        // Check if the complement is present in the map.
        if (seen.count(complement) > 0 && seen[complement] != i)
        {
            // If it is, return the indices of the two elements.
            return {i, seen[complement]};
        }
        // Otherwise, add the current element to the map.
        seen[nums[i]] = i;
    }
    // If there are no two elements in the array that add up to the target, return an empty vector.
    return {};
}

int main() {
    // Code for your main function
    vector<int> nums = {2, 7, 11, 15};
    int target = 9;
    vector<int> indices = twoSum(nums, target);

    if (indices.size() == 2) {
        cout << "Indices: " << indices[0] << ", " << indices[1] << endl;
    } else {
        cout << "No valid indices found." << endl;
    }

    return 0;
}
