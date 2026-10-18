// Fractional Knapsack
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct item {
    int value;
    int weight;
};

bool cmp(pair<double, item> a, pair<double, item> b) {
    return a.first > b.first;
}

double fractionalKnapsack(int w, item arr[], int n) {
    vector<pair<double, item>> v;

    for (int i = 0; i < n; i++) {
        double perUnitValue = (1.0 * arr[i].value) / arr[i].weight;
        v.push_back(make_pair(perUnitValue, arr[i]));
    }

    sort(v.begin(), v.end(), cmp);

    double totalValue = 0;

    for (int i = 0; i < n && w > 0; i++) {
        if (v[i].second.weight > w) {
            totalValue += w * v[i].first;
            w = 0;
        } else {
            totalValue += v[i].second.value;
            w -= v[i].second.weight;
        }
    }

    return totalValue;
}

int main() {
    int n = 3, w = 50;

    item arr[] = {
        {60, 10},
        {100, 20},
        {120, 30}
    };

    double ans = fractionalKnapsack(w, arr, n);

    cout << ans << endl;
    return 0;
}
