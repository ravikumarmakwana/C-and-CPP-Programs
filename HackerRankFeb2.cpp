#include <bits/stdc++.h>

using namespace std;

// Complete the countingValleys function below.
int countingValleys(int n, string s) {

    int c=0;
    for(int i=0;i<n;i++){
        if(s[i]=='D')
            c--;
        else
            c++;
    }
    return c;
}

int main()
{
    int n;
    cin >> n;

    string s;
    cin>>s;
    int result = countingValleys(n, s);

    cout<< result << "\n";

    return 0;
}
