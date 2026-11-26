class Solution {
public:
    vector<int> parent, size;

    int find(int x) {
        if (parent[x] == x)
            return x;

        return parent[x] = find(parent[x]);
    }

    void unite(int x, int y) {
        int px = find(x);
        int py = find(y);

        if (px == py)
            return;

        if (size[px] < size[py])
            swap(px, py);

        parent[py] = px;
        size[px] += size[py];
    }

    vector<vector<string>> accountsMerge(
        vector<vector<string>>& accounts) {

        int n = accounts.size();

        parent.resize(n);
        size.assign(n, 1);

        for (int i = 0; i < n; i++) {
            parent[i] = i;
        }

        unordered_map<string, int> emailToAccount;

        // Step 1: Union accounts sharing an email
        for (int i = 0; i < n; i++) {
            for (int j = 1; j < accounts[i].size(); j++) {

                string email = accounts[i][j];

                if (emailToAccount.find(email)
                    != emailToAccount.end()) {

                    unite(i, emailToAccount[email]);

                } else {
                    emailToAccount[email] = i;
                }
            }
        }

        // Step 2: Group emails by their root account
        unordered_map<int, vector<string>> merged;

        for (auto& [email, account] : emailToAccount) {
            int root = find(account);
            merged[root].push_back(email);
        }

        // Step 3: Prepare final answer
        vector<vector<string>> ans;

        for (auto& [root, emails] : merged) {

            sort(emails.begin(), emails.end());

            vector<string> account;
            account.push_back(accounts[root][0]);

            for (string& email : emails) {
                account.push_back(email);
            }

            ans.push_back(account);
        }

        return ans;
    }
};
