#include <bits/stdc++.h>
using namespace std;

string card[100],res[100];
int n;

void cut(string arr[], int size){
    for(int i=size/2;i<size;i++){
        res[i-size/2] = arr[i];
        res[i] = arr[i-size/2];
    }

    for(int i=0;i<size;i++){
        card[i] = res[i];
    }
}

void shuff(string arr[], int size){
    for(int i=0;i<size/2;i++){
        res[i*2] = card[i];
        res[i*2+1] = card[i+size/2];
    }

    for(int i=0;i<size;i++){
        card[i] = res[i];
    }
}

int main(){
    cin >> n;
    for(int i=0;i<n;i++){
        cin >> card[i];
    }

    string s;
    cin.ignore();
    getline(cin >> ws,s);

    for(int i=0;i<s.size();i++){
        if(s[i] == 'C') cut(card,n);
        else if(s[i] == 'S') shuff(card,n);
    }

    for(int i=0;i<n;i++){
        cout << res[i] << " ";
    }

}