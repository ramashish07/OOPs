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


//  accessing object memebers through pointers and 
// creating objects in stack
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
   rectangle r;   // Object is created in stack

   rectangle *p;   // pointer is created in stack

   p = & r ;

   p->length= 10;
   p->breadth =20;
   cout <<p->area()<<endl;


}
