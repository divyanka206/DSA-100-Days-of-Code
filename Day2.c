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


/*
You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.
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

}
