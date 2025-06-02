#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int weight[n], value[n];
    for (int i = 0; i < n; i++)
    {
        cin >> weight[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> value[i];
    }
    int W;
    cin >> W;
    int dp[n + 1][W + 1];
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= W; j++)
        {
            if (i == 0 || j == 0)
                dp[i][j] = 0;
        }
    }
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= W; j++)
        {
            if (weight[i - 1] <= j)
            {
                int op1 = dp[i - 1][j - weight[i - 1]] + value[i - 1];
                int op2 = dp[i - 1][j];
                dp[i][j] = max(op1, op2);
            }
            else
            {
                int op2 = dp[i - 1][j];
                dp[i][j] = op2;
            }
        }
    }
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            cout << dp[i][j] << " ";
        }
        cout << endl;
    }

      int i = n, j = W;
    vector<int> selected_items;

    while (i > 0 && j > 0) {
        // If the current item is included in the optimal solution
        if (dp[i][j] != dp[i-1][j]) {
            selected_items.push_back(weight[i-1]); // Include the item's weight
            j -= weight[i-1]; // Reduce the capacity
        }
        i--; // Move to the previous item
    }

    // Output the selected items
    for (int w : selected_items) {
        cout << w << " ";
    }
    cout<<endl;

    //cout << endl << k[n][capacity] << endl;

    cout << dp[n][W] << endl;
    return 0;
}