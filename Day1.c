// Problem: Write a C program to insert an element x at a given 1-based position pos in an array of n integers. Shift existing elements to the right to make space.
//
// Input:
// - First line: integer n
// - Second line: n space-separated integers (the array)
// - Third line: integer pos (1-based position)
// - Fourth line: integer x (element to insert)
//
// Output:
// - Print the updated array (n+1 integers) in a single line, space-separated
//
// Example:
// Input:
// 5
// 1 2 4 5 6
// 3
// 3
//
// Output:
// 1 2 3 4 5 6
//
// Explanation: Insert 3 at position 3, elements [4,5,6] shift right
// Close




















/*
  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order.
*/

int* twoSum(int* nums, int numsSize, int target, int* returnSize) {
    if(numsSize < 2){
        return NULL;
    }

    int* result = (int*)malloc(2 * sizeof(int));
    *returnSize = 2;

    for(int i = 0; i < numsSize; i++){
        for(int j = i+1; j < numsSize; j++){
            if(nums[i]+nums[j] == target){
                result[0] = i;
                result[1] = j;
                return result;
            }
        }
    }

    return NULL;
}
