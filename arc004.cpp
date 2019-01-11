#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;
int c[4];
int main(){
    int N;
    cin >> N;
    string cc;
    cin >> cc;

    for(int i = 0; i < N; i++){
        c[cc[i]-'1']++;
    }

    sort(c,c+4);

    cout << c[3] << " " << c[0] << endl;

    return 0;
}