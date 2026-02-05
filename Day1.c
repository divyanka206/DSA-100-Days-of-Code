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

#include <stdio.h>

int main() {

    int arr[10];
    int n;
    printf("enter the number of elements:\n"); // no. of elements is told by the user
    scanf("%d", &n);

    if(n < 0 || n > 10){
        printf("Invalid number of elements:\n");
        return 0;
    }

    printf("enter %d elements:\n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("enter the position(0 to %d):", n);
    scanf("%d", &pos);

    if(pos < 0 || pos > n){     // pos == n is valid for insertion at the end
        printf("invalid position entered!\n");
        return 0;
    }

    int new_element;
    printf("enter a new element to be inserted: ");
    scanf("%d", &new_element);

    //condition check
    if(n == 10){
        printf("Array is full: Insertion not possible\n");
        return 0;
    }
    else{
        for(int i = n-1; i >= pos; i--){
            arr[i+1] = arr[i];
        }

        //insertion of element
        arr[pos] = new_element;
        n += 1;

    }
    //printing the updated array
    printf("Array after insertion:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;
}

/*
  Given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target. You may assume that each input would have exactly one solution, and you may not use the same element twice.You can return the answer in any order. {Leetcode}
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
