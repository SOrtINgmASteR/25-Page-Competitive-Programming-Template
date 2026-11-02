// Sets
#include <bits/stdc++.h>
using namespace std;

void print_set_with_iterators(set<int> &s){
    // Printing set using iterators
    for(auto it = s.begin(); it != s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void print_set_with_rangeloop(set<int> &s){
    // Printing set using range based loop
    for(auto x : s){
        cout << x << " ";
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

    int n, x = 11;
    cin >> n;
    
    // Declaration   
    set<int> s; // Set in ascending order
    // set<int, greater<int>> s; // Set in descending order

    // Insertion or Taking Input
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        s.insert(x);  
    }
    print_set_with_iterators(s);
    
    // Deletion
    // s.clear();
    s.erase(10);               // Erase by value
    s.erase(s.begin()); // Erase by iterator
        
    print_set_with_iterators(s);
        
    // Searching
    cout << s.count(x) << endl; // Count of x in set
    auto it = s.find(x); // Find x in set
    if(it != s.end()){
        cout << "Found " << *it << endl;
    }
    
    // Max, Min Elements & sum
    int mn = *s.begin(); // Min element
    int mx = *s.rbegin(); // Max element
    int sum = accumulate(s.begin(), s.end(), 0);  // Sum of all elements

    cout << "Minimum Element: " << mn << endl;
    cout << "Maximum Element: " << mx << endl;
    cout << "Sum of all Elements: " << sum << endl;

    // Iterators
    auto lo = lower_bound(s.begin(), s.end(), x);  // iterator to first x
    auto up = upper_bound(s.begin(), s.end(), x);  // iterator just past the last x
    cout << "Lower Bound Value: " << *lo << endl;
    cout << "Upper Bound Value: " << *up << endl;

    return 0;
}
