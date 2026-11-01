// Vectors
#include <bits/stdc++.h>
using namespace std;

void print_vector_with_index(vector<int> &v){
    // Printing vector using index
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }
    cout << endl;
}

void print_vector_with_iterator(vector<int> &v){
    // Printing vector using iterator
    for(auto it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void print_vector_with_rangeloop(vector<int> &v){
    // Printing vector using range based loop
    for(auto x : v){
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

    int n;
    cin >> n;
    
    // Declaration   
    vector<int> v;        // Declare vector without size
    // vector<int> v(n);     // Allocate Size n
    // vector<int> v(n, 1);  // Allocate Size n with 1s

    // Insertion or Taking Input
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        v.push_back(x);  
    }
    print_vector_with_iterator(v);

    v.assign(5, 1);   // Assign n elements with value 1
    int sz = v.size();       // Gives size of vector

    // Deletion
    v.pop_back();               // Remove last element
    // v.clear();               // Clear the vector
    // v.erase(v.begin() + 2, v.begin() + 4);  // Erase element at index 2 to 4
    print_vector_with_iterator(v);
    
    v.push_back(4);
    v.push_back(3);
    v.push_back(7);
    v.push_back(13);
    v.push_back(4);
    v.push_back(100);
    v.insert(v.begin() + 2, 100); // Insert 100 at index 2
    print_vector_with_rangeloop(v);
    
    // Sorting
    sort(v.rbegin(), v.rend());  // Sort Descending
    print_vector_with_rangeloop(v);
    sort(v.begin(), v.end());    // Sort Ascending
    print_vector_with_rangeloop(v);

    // Iterators
    auto first_element =  *v.begin();    // Gives first element
    auto last_element = *v.rbegin();     // Gives last element
    auto end =  v.end();        // Iterator past the last element address
    auto begin = v.rend();   // Iterator before the first element address

    cout << "First Element: " << first_element << endl;
    cout << "Last Element: " << last_element << endl;

    print_vector_with_index(v);

    // Binary Search (On must be sorted ascending order)
    auto lo = lower_bound(v.begin(), v.end(), 4);  // iterator to first x  
    auto up = upper_bound(v.begin(), v.end(), 4);  // iterator just past the last x
    auto lo_index = lo - v.begin();  // index of first x
    auto lo_value = *lo;  // value of first x
    auto up_index = up - v.begin();  // index just past the last x
    auto up_value = *up;  // value just past the last x

    cout << "Lower Bound Value: " << lo_value << endl;
    cout << "Lower Bound Index: " << lo_index << endl;
    cout << "Upper Bound Value: " << up_value << endl;
    cout << "Upper Bound Index: " << up_index << endl;

    // Max, Min Elements & Indexes and Sum
    auto mn = *min_element(v.begin(), v.end()); // Max element 
    auto mx = *max_element(v.begin(), v.end()); // Max element
    auto mn_index = min_element(v.begin(), v.end()) - v.begin(); // Index of max element
    auto mx_index = max_element(v.begin(), v.end()) - v.begin(); // Index of min element
    auto sum = accumulate(v.begin(), v.end(), 0);  // Sum of all elements  

    cout << "Minimum Element: " << mn << endl;
    cout << "Maximum Element: " << mx << endl;
    cout << "Index of Minimum Element: " << mn_index << endl;
    cout << "Index of Maximum Element: " << mx_index << endl;
    cout << "Sum of all Elements: " << sum << endl;

    return 0;
}
