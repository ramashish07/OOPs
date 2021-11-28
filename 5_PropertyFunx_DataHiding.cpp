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
  private :
   int length;
   int breadth;
  public:

   void  setlength(int l)
    {
        if ( l>=0)
        length= l;
        else {
        cout<<"Length cannot be nagative"<<endl;
        length = 0;
        }
    }

    void setbreadth(int b )
    {  
        if (  b >=0)
        breadth= b ;
        else {
         cout <<"Breadth cannot be negative "<<endl;
         breadth=0;
         } 
    }

    int getlength( )
    {
        return length;
    }
   
     int getbreadth()
     {
         return breadth; 
     }

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
  /*   r.length() =10   cannot read length and breadth now
       cout <<r.length()<<endl  cannot write length and breadth now 
       */

  // cout<<r.area()<<endl;   :Garbage value as length and value are garbage value .

// Since functions are public in class, therefore we need to define a funcion 
 // to read and write the data members 

    r.setlength(10);
    r.setbreadth(-5);  
   
     cout <<r.area()<<endl;  //  Output zero  ;

     cout <<"Length of the rectangle is "<<r.getlength () <<endl; 
}


/*  Property Fuction 

  getxxxxx--->>>> Accessor 
  setxxxxxx-->>>> Mutator 
 
  if we only define accessor it is "read only" function
  if we only define Mutator it is  "write only " function
   if we define both accessor and mutator it is called read and write function
  */
