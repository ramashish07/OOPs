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


 //  Data Hiding --Important topic in  OOps 

// In  data hiding what we have to do is to make the data private  as 
// it can lead to data mishandling 
// eX. iN TELEVISION only buttons (fxns ) should show and not wires inside(data) otherwise 
// wires misleading can lead to damaging of functions of the tv 

  // Let's  see an  example of data mishandling of data inside the class
  // is public 
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
   
    rectangle   r ;

  r.length=10;
  r.breadth=-25;  //  Let's assume class is designes by someone else 
        // therefore this program who is writing the main function 
        // doesnot know about length and breadth
        // therefore he enters negative breadth which leads to negative 
        // area which is not possible .hence data is mishandled here 
        // to obtain function valve which is not possible .
        // Although it is the mistake of the programmer ,but the class
        // will be equally blamed that what the hell was class doing 
        // when data mishandling took place .
        // Hence we want to design flawless class which is perfect and 
        // we can avoid data mishandling .Therefore data hiding is used.


  cout<<r.area()<<endl;


}
