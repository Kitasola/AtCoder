#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
  string in(9, '0');
  int n = 0, s = 0, dummy = 0;

  cin >> in;
  for(int i = 0; i < in.size(); ++i){
    dummy = (int)(in[i] - '0');
    s += dummy;
    n += dummy * pow(10, in.size() - i - 1);
  }
  if((n % s) == 0){
    cout << "Yes" << endl;
  }
  else{
    cout << "No" << endl;
  }

  return 0;
}
