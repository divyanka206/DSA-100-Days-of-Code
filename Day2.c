// Problem: Write a C program to delete the element at a given 1-based position pos from an array of n integers. Shift remaining elements to the left.
//
// Input:
// - First line: integer n
// - Second line: n space-separated integers
// - Third line: integer pos (1-based position to delete)
//
// Output:
// - Print the updated array with (n-1) elements, space-separated
//
// Example:
// Input:
// 5
// 10 20 30 40 50
// 2
//
// Output:
// 10 30 40 50
//
// Explanation: Delete position 2 (element 20), remaining elements shift left

#include <stdio.h>

int main() {
    int arr[10];
    //number of elements to be entered in array
    int n;
    printf("enter the number of elements(max = 10): ");
    scanf("%d", &n);

    if(n < 0 || n > 10){
        printf("Invalid number of elements!\n");
        return 0;
    }

    //taking input from user
    printf("enter elements: ");
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int pos;
    printf("enter the position: ");
    scanf("%d", &pos);

    if(pos < 0 || pos >= n){  // pos == n is not valid for deletion as it goes out of bound
        printf("Invalid position!\n");
        return 0;
    }

    //condition check
    if(n == 0){    //nothing to delete
        printf("Array is empty: Deletion not possible\n");
        return 0;
    }
    else{
        for(int i = pos; i <= n-2; i++){
            arr[i] = arr[i+1];   // arr[n-2] = arr[n-2+1] = arr[n-1]
        }

        n -= 1; //updating the number of elements in the array
    }

    // printing the updated array
    printf("Array after deletion:");
    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    printf("\n");
    return 0;

}

/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.{Leetcode}
*/

int maxProfit(int* prices, int pricesSize) {
    int maxprofit = 0;
    int minprice = prices[0];

    for(int i = 1; i < pricesSize; i++){
        if(prices[i] < minprice){
            minprice = prices[i];
        }else{
            int profit = prices[i] - minprice;
            if(profit > maxprofit){
                maxprofit = profit;
            }
        }
    }
    return maxprofit;
}




    //Time complexity = O(n^2):
    // int maxprofit = 0;
    // for(int i =0; i < pricesSize - 1; i++){
    //     for(int j = i+1; j < pricesSize; j++){
    //         int profit = prices[j] - prices[i];
    //         if(profit > maxprofit){
    //             maxprofit = profit;
    //         }
    //     }
    // }
    // return maxprofit;


