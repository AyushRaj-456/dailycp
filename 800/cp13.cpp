// #include <bits/stdc++.h>
// using namespace std;

// int main(){
//     int t;
//     cin >> t;

//     while(t--){
//         long long int n;
//         cin >> n;
//         long long int a[n], max = INT_MIN, unique = 0;
//         for(long long int i = 0; i<n;i++){
//             cin >> a[i];
//             if(max <= a[i]){
//                 max = a[i];
//             }
//         }
//         long long int freq[max + 1] = {0};
//         vector<long long int> b,c;
//         for(long long int i = 0; i<n;i++){
//             freq[a[i]]++;
//         }

//         long long int even = 0, odd = 0;
//         // for(int i = 0; i<=max;i++){
//         //     if(freq[i]  >= 1){
//         //         unique++;
//         //     }
            
//         // }
//         for(long long int i=0; i<n;i++){
//             if(a[i] != max){
//                 b.push_back(a[i]);
//             }else{
//                 c.push_back(a[i]);
//             }
//         }

//         // if(unique == 1){
//         //     cout << "-1" << endl;
//         //     continue;
//         // }
//         if(b.size() == 0){
//             cout << "-1" << endl;
//             continue;
//         }else{
//             cout << b.size() << " " << c.size() << endl;
//             for(long long int i = 0; i<b.size();i++){
//                 cout << b[i] << " ";
//             }
//             cout << endl;
//             for(long long int i = 0; i<c.size();i++){
//                 cout << c[i] << " ";
//             }
//             cout << endl;
//         }
//     }
// }


#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t; 
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) 
            cin >> a[i];

       
        long long mx = *max_element(a.begin(), a.end());
        vector<long long> b, c; 
        for (int i = 0; i < n; i++)
        {
            if (a[i] != mx)
                b.push_back(a[i]);
            else
                c.push_back(a[i]);
        }

        
        if (b.size() == 0) 
        {
            cout << -1 << endl; 
        }
        else
        {
            
            cout << b.size() << " " << c.size() << endl;
            
            for (auto it : b)
                cout << it << " ";
            cout << endl;
            
            for (auto it : c)
                cout << it << " ";
            cout << endl;
        }
    }
    return 0;
}
