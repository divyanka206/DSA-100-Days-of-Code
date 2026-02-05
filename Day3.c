// Problem: Implement linear search to find key k in an array. Count and display the number of comparisons performed.
//
// Input:
// - First line: integer n (array size)
// - Second line: n space-separated integers
// - Third line: integer k (key to search)
//
// Output:
// - Line 1: "Found at index i" OR "Not Found"
// Line 2: "Comparisons = c"
//
// Example:
// Input:
// 5
// 10 20 30 40 50
// 30
//
// Output:
// Found at index 2
// Comparisons = 3
//
// Explanation: Compared with 10, 20, 30 (found at index 2 with 3 comparisons)


#include <stdio.h>

int main() {
    int n;
    printf("enter number of elements: ");
    scanf("%d", &n);

    int arr[n];  //defining an array
    printf("enter %d elements: ", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int key;  //taking input for the element to be searched
    printf("enter the element to search: ");
    scanf("%d", &key);

    int found = 0; //flag
    int count = 0; //counts the comparisions
    for(int i = 0; i < n; i++){
        if(arr[i] == key){    //condition check
            printf("Found %d at index %d\n", key, i);
            found = 1;
            count += 1;
            break;    // loop wont run after key is found
        }
    }

    printf("Comparisions = %d\n", count);

    if (!found){
        printf("%d not found\n", key);
    }

    return 0;
}

/*
You are given an array arr[] of size n - 1 that contains distinct integers in the range from 1 to n (inclusive). This array represents a permutation of the integers from 1 to n with one element missing. Your task is to identify and return the missing element. {GeeksforGeeks}
*/

int missingNum(int *arr, int size) {
    //calc expected sum
    int expected_sum = 0;
    for(int i = 1; i <= size+1; i++){
        expected_sum += i;
    }

    //missing number
    int actual_sum = 0;
    for(int i = 0; i < size; i++){
        actual_sum += arr[i];
    }

    return expected_sum - actual_sum;

}
