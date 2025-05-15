#include <bits/stdc++.h>
using namespace std;

// Function to get index of the person with maximum credit
int getMaxCredit(int net[]) {
    int maxInd = 0;
    for (int i = 1; i < 100; i++) {
        if (net[i] > net[maxInd]) {
            maxInd = i;
        }
    }
    return maxInd;
}

// Function to get index of the person with maximum debit
int getMaxDebit(int net[]) {
    int minInd = 0;
    for (int i = 1; i < 100; i++) {
        if (net[i] < net[minInd]) {
            minInd = i;
        }
    }
    return minInd;
}

// Function to check if all amounts are settled
bool isAllZero(int net[]) {
    for (int i = 0; i < 100; i++) {
        if (net[i] != 0) return false;
    }
    return true;
}

// Recursive function to minimize transactions
void minimizeCashFlowUtil(int net[]) {
    int maxCred = getMaxCredit(net);
    int maxDebt = getMaxDebit(net);

    // If all settled
    if (net[maxCred] == 0 && net[maxDebt] == 0)
        return;

    // Find the minimum amount to be transferred
    int minVal = min(-net[maxDebt], net[maxCred]);
    net[maxCred] -= minVal;
    net[maxDebt] += minVal;

    cout << "Person " << maxDebt << " pays Person " << maxCred << ": " << minVal << endl;

    minimizeCashFlowUtil(net);
}

// Wrapper function
void minimizeCashFlow(vector<vector<int>> &graph, int n) {
    int net[100] = {0};

    // Calculate net amount for each person
    for (int p = 0; p < n; p++) {
        for (int i = 0; i < n; i++) {
            net[p] += (graph[i][p] - graph[p][i]);
        }
    }

    minimizeCashFlowUtil(net);
}

// Example usage
int main() {
    // Number of people in group
    int n = 3;

    // graph[i][j] means person i owes person j
    vector<vector<int>> graph = {
        {0, 1000, 2000},
        {0, 0, 500},
        {0, 0, 0}
    };

    cout << "Optimized Transactions:\n";
    minimizeCashFlow(graph, n);

    return 0;
}
