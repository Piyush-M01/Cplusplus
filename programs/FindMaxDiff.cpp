//Find a specific pair in Matrix
// Given an n x n matrix mat[n][n] of integers, find the maximum value of mat(c, d) – mat(a, b) over all choices of indexes such that both c > a and d > b.
// Example: 

// Input:
// mat[N][N] = {{ 1, 2, -1, -4, -20 },
//              { -8, -3, 4, 2, 1 }, 
//              { 3, 8, 6, 1, 3 },
//              { -4, -1, 1, 7, -6 },
//              { 0, -4, 10, -5, 1 }};
// Output: 18
// The maximum value is 18 as mat[4][2] 
// - mat[1][0] = 18 has maximum difference. 

//NAIVE SOLUTION: O(N^4)
// #include <iostream>
// using namespace std;
// int main() {
//     // Write C++ code here
//     int n=3;
//     int arr[n][n]={{ 1, 2, 3},
//              { 4, 5, 6 }, 
//              { 7, 8, 9 }};
//     int max= -99999999;
//     for(int i=0;i<n;i++)
//     {
//         for(int j=0;j<n;j++)
//         {
//             for(int k=i+1;k<n;k++)
//             {
//                 for(int l=j+1;l<n;l++)
//                 {
//                     if(abs(arr[i][j]-arr[k][l])>max)
//                     max=abs(arr[i][j]-arr[k][l]);
//                 }
//             }
//         }
//     }
//     cout<<max;

//     return 0;
// }

