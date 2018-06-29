#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
  string in;
  int n = 0, s = 0, first = 0, delta = 0;

  cin >> in;
  n = atoi(in.c_str());
  for(int i = 0; i < in.size(); ++i){
    s += (int)(in[i] - '0');
  }

  first = n / s;
  for(int i = 0; i < n; ++i){
    cout << (first + s * i) << endl;
  }

  return 0;
}
