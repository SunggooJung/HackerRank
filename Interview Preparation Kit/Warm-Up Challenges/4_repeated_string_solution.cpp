#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {

    long a_count = 0;
    int a_count_in_s=0;
    
    if((int)s.size()==1){
        
        if(s[0] == 'a') return n;
        else return 0;
    } 

    for(auto i:s){
        if(i=='a') a_count_in_s++;
    }
    
    for(int i=0; i< n%(int)s.size(); i++){
        if( s[i] == 'a' ) a_count++;
    }
  
    a_count += a_count_in_s*(n/(int)s.size());
    
    return a_count;
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
