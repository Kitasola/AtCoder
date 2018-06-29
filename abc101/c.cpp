#include<iostream>
#include<string>
#include<math.h>

using namespace std;

int main(){
  int k, n, flag, answer = 0, dummy;
  cin >> n;
  cin >> k;
  for(int i = 0; i < n; ++i){
    cin.ignore();
  }

  if((n - 1) % (k - 1) != 0){
    ++answer;
  }
  answer += (n -1) / (k - 1);

  cout << answer << endl;

  return 0;
}
