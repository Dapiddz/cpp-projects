#include<iostream>
#include<cmath>
using namespace std;
int main(){
  double x, y, z;
  char op;
  cout << "************CALCULATOR************"<< endl;
  cout << "Please enter 1 : " ;
  cin >> x;
  cout << "Please enter 2 : ";
  cin >> y;
  cout << "Enter operator (+, -, *, /): " << endl;
  cin >> op;
  if(op == '+'){
      z = x + y;
      cout << "The result is : " << z << endl;
  }
  else if(op == '-'){
      z = x - y;
      cout << "The result is : " << z << endl;
  }
  else if(op == '*'){
      z = x * y;
      cout << "The result is : " << z << endl;
  }
  else if(op == '/'){
      z = round(x/double(y));
      cout << "The result is: " <<  z << endl;
  }
  else{ cout << "Invalid operator";}
  return 0;
}
