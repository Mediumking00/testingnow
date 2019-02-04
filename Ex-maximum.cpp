#include <iostream>
using namespace std;
int main() {
  int N,max;
  cout<<"How many number do you want to insert : ";
  cin>>N;
  int num[N];
  for(int i=0;i<=N;i++){
    cout << "Enter number ["<<i<<"] :";
    cin>>num[i];
    if(i==1 || num[i] >= max){
      max=num[i];
    }
  }
  cout<< "Maximum location = ";
  for(int i=0;i<=N;i++){
    if (max==num[i]) {
      cout <<i<<",";
    }
  }


  cout<< "Maximum numder = "<< max ;
  return 0;
}
