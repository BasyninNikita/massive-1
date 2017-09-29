#include <iostream>
#include <string>
using namespace std;
int main()
{
   int array[10];int a=0;
   cout<<"enter the massive:";
   bool failure = false;
   for( int i = 0; i < 10; ++i ) {
       if( !(cin >> array[ i ]) ) {
           failure = true;
           a=1;
           cout<<"An error has occurred while reading numbers";
           break;
       }
   }
   
   if( !failure ) {
   int j=array[0];
   for(int i=0;i<10;i++)
   {
       if (array[i]>j)
       {
           j=array[i];
       }
   }
   if(a!=1)
   {
       cout<<"max el:";cout<<j;
   }
}
}
