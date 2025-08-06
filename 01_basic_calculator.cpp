#include<iostream>
using namespace std;
int main(){
  int x, y;
  char op;
  cout << "Please enter X and Y" << endl;
  cin >> x >> y;
  cout << "Enter operator (+, -, *, %): " << endl;
  cin >> op;
  if(op == '+'){
      cout << x + y << endl;
  }
  else if(op == '-'){
      cout << x - y << endl;
  }
  else if(op == '*'){
      cout << x * y << endl;
  }
  else if(op == '%'){
      cout << x % y << endl;
  }
  else{ cout << "Invalid operator";}
  return 0;
}
