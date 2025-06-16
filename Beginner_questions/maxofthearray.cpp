
#include<iostream>
#include<vector>
using namespace std;
int main(){
   
   int array[]={1,2,99,55,44};
   int max=array[0];

   for(int i=1;i<5;i++){
    if(array[i]>max){
        max=array[i];
    }
   }
   cout<<max<<endl;
}