#include<bits/stdc++.h>
using namespace std;
#define ff    first 
#define ss    second 
#define int   long long
#define pb    push_back
#define  mp   make_pair 
#define pii   pair <int ,int >
#define  vi   vector <int >
#define mii    map<int ,int >
#define pqb   priority_queue <int>
#define pqs   priority_queue<int ,vi, greater <int >>
#define setbits (x)   __builtin_popcoutll(x)
#define zrobits(X)   __builtin_ctzll(x)
#define mod      1000000007
#define w(X)     int x ; cin>>x; while(x--)
#define f(i,a ,n )    for (int i =a ; i< n ; i++)
#define fast         ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);



const int n = 1e7;


 class rectangle 
 {
 
 public:
   int length;
   int breadth;

  int area()
  {
      return length*breadth;
  }
 
  int perimeter ()
  {
      
      return 2*length*breadth;
  }


 };

int32_t main ()
{
  fast;
   rectangle r1,r2;
   r1.length=10;
   r1.breadth=12;
   cout<<r1.area()<<endl;
   r2.breadth=40;
   r2.length=14;
   cout <<r2.perimeter()<<endl; 
   
 


}
