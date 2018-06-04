#include<bits/stdc++.h>
using namespace std;

int n, m, x, y, z;
int ara[200000];

int main()
{
    cin >> n;
    for(int i = 0; i < n; i++) cin >> ara[i];
    bool flg = false;
    int beg = 0, end = n - 1;

    while(beg < end){
        int mid = (beg + end) / 2;
        int midval = ara[mid];
        if(midval > 2){
            end = mid - 1;
        }
        else if(midval < 2){
            beg = mid + 1;
        }
        else{
            end = mid;
        }
    }
    return 0;
}
