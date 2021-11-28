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
   /*
     rectangle *p ;   // this pointer is created in stack;--1

     p  =new  rectangle ;//--------an object is created in heap with no name and 
                           the pointer p is pointing to it .
     */

    rectangle *p= new rectangle();  // this is same as writing  1 and 2
                                    // in single line .


     p->length=10;
     p->breadth=20;
     cout <<p->area()<<endl;  

}

/* Summary
   rectangle r // creating object in stack;
   rectangle *p= new rectangle ();  // creating object in heap
   */

  
