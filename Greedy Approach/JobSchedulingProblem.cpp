// Job scheduling Problem
#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

struct Job {
    int id;
    int dead;
    int profit;
};

bool cmp(Job a, Job b) {
    return a.profit > b.profit;
}

vector<int> JobScheduling(Job arr[], int n) {
    sort(arr, arr + n, cmp);

    int maxiDeadline = INT_MIN;
    for (int i = 0; i < n; i++) {
        maxiDeadline = max(maxiDeadline, arr[i].dead);
    }

    vector<int> schedule(maxiDeadline + 1, -1);
    int count = 0;
    int maxProfit = 0;

    for (int i = 0; i < n; i++) {
        int currProfit = arr[i].profit;
        int currJobID = arr[i].id;
        int currDead = arr[i].dead;

        for (int k = currDead; k >= 1; k--) {
            if (schedule[k] == -1) {
                count++;
                maxProfit += currProfit;
                schedule[k] = currJobID;
                break;
            }
        }
    }

    return {count, maxProfit};
}

int main() {
    Job arr[] = {
        {1, 4, 20},
        {2, 1, 10},
        {3, 1, 40},
        {4, 1, 30}
    };

    int n = sizeof(arr) / sizeof(arr[0]);

    vector<int> ans = JobScheduling(arr, n);

    for (int i : ans) {
        cout << i << " ";
    }

    return 0;
}
