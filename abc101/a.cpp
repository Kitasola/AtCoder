#include<iostream>

using namespace std;

int main(void){
  char a[4];
  int answer = 0;
  cin >> a;
  for(int i = 0; i < 4; ++i){
    if(a[i] == '+'){
      ++answer;
    }
    else{
      --answer;
    }
  }
  cout << answer << endl;
  return 0;
}
