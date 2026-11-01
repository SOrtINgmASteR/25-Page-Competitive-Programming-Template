// Vectors of Pairs
#include<bits/stdc++.h>
using namespace std;

void print_vector_of_pairs_with_index(vector<pair<int, int>> &vp){
    for(int i = 0; i < vp.size(); i++){
        cout << vp[i].first << " " << vp[i].second << endl;
    }
    cout << endl;
}

void print_vector_of_pairs_with_iterator(vector<pair<int, int>> &vp){
    for(auto it = vp.begin(); it != vp.end(); it++){
        cout << it->first << " " << it->second << endl;
    }
    cout << endl;
}

void print_vector_of_pairs_with_rangeloop(vector<pair<int, int>> &vp){
    for(auto x : vp){
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
}

int main(){
#ifndef ONLINE_JUDGE
    freopen("../../input.txt", "r", stdin);
    freopen("../../output.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    
    // Declaration
    vector<pair<int, int>> vp;              // Declare without size
    // vector<pair<int, int>> vp(n);           // Allocate Size n
    // vector<pair<int, int>> vp(n, {1, 2});   // Allocate Size n with pairs {1, 2}

    // Insertion or Taking Input
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        vp.push_back({x, y});  
    }
    // vp.assign(6, {1, 2});   // Assign n elements with pairs {1, 2}

    print_vector_of_pairs_with_iterator(vp);

    // Deletion
    vp.pop_back();                       // Remove last element
    // vp.erase(vp.begin() + 1);  // Remove element at index 1
    // vp.clear();                         // Clear the vector
    
    print_vector_of_pairs_with_iterator(vp);

    // Finding the maximum pair based on custom element
    pair<int, int> max_pair = *max_element(vp.begin(), vp.end(), [](const pair<int, int> &a, const pair<int, int> &b){
        return a.first < b.first; // Compare based on first element
        return a.second < b.second; // Compare based on second element
    });


    return 0;
}