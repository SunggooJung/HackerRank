#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    string input_string;
    int t=0;
    cin >> t; 
    

    for(int i=0; i<t; i++){
        cin >> input_string;
        vector<char> even, old;
        int index = 0;
        for(auto j:input_string){
            index++;
            if(index%2)
                even.push_back(j);
            else
                old.push_back(j);
        }

        for(auto k:even) cout <<k;
        cout <<" ";
        for(auto l:old) cout << l;
        cout << endl;
    }
    return 0;
}

