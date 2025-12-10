#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    int pan[n],sum[n];

    for(int i=0;i<n;i++){
        cin >> pan[i];
        sum[i] = pan[i];
    }

    sort(sum,sum+n);

    for(int i=0;i<n;i++){
        cout << pan[i] << " ";
    }
    cout << endl;
    
    for(int i=n-1;i>=0;i--){
        if(pan[i] == sum[i]){
            continue;
        }
        else{
            for(int j=0;j<n;j++){
                if((sum[i] == pan[j]) && (j != 0)){
                    for(int k=0;k<=floor(j/2);k++){
                        swap(pan[k],pan[j-k]);
                    }
                    for(int k=0;k<n;k++){
                        cout << pan[k] << " ";
                    }

                    cout << "\n";
                }
            }

            for(int j=0;j<=floor(i/2);j++){
                swap(pan[j],pan[i-j]);
            }

            for(int k=0;k<n;k++){
                cout << pan[k] << " ";
            }

            cout << "\n";
        }
    }


}