// #include <bits/stdc++.h>
// #include<iostream>
// using namespace std;

// vector<int> kSmallest(int arr[], int n, int k)
// {
//     priority_queue<int> pq;
//     for (int i = 0; i < k; i++)
//     {
//         pq.push(arr[i]);
//     }
//     for (int i = k; i < n; i++)
//     {
//         if (arr[i] < pq.top())
//         {
//             pq.pop();
//             pq.push(arr[i]);
//         }
//     }
//     vector<int> v;
//     while(!pq.empty())
//     {
//         v.push_back(pq.top());
//         pq.pop();
//     }
// }
#include <bits/stdc++.h>
#include<iostream>
using namespace std;
       
int main(){	
ios_base::sync_with_stdio(0); 
cin.tie(0); 
 
 priority_queue<int> pq;
 pq.push(1);
 pq.push(2);
 pq.push(3);
 pq.push(4);
 while(!pq.empty())
 {
 cout<<pq.top()<<endl;
 pq.pop();
 }
 //cout<<pq.top();
 
      
return 0;
}