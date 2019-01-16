#include<iostream>
using namespace std;

void reverseString(string x){
  string y=x;
  int L=x.size();

  int i=0;
  while (i<L)
  {
    std::cout << x[L-i-1] ;
    i++;
  }

}
int main(){
  string s;
  std::cout << "Enter stringxxx : ";
  std::cin >> s;
  reverseString(s);
return 0;
}
