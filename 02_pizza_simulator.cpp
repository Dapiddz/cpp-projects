#include<iostream>
using namespace std;
int main(){
  int choice;
  cout << "Welcome to Freddie Fazbear Pizza " << endl;
  cout << "Please choose your pizza:" << endl;
  cout << "1. Margherita ($5.99)" << endl  << "2. Pepperoni ($6.99)" << endl << "3. BBQ Chicken ($7.49)" << endl << "4. Hawaiian ($6.99)" << endl << "5. Veggie Supreme ($6.49)" << endl << "6. Meat Lovers ($7.99)" << endl << "7. Cheese Burst ($6.99)" << endl << "8. Four Cheese ($7.49)" << endl << "9. Spicy Chicken ($7.29)" << endl << "10. Tuna Melt ($6.79)" << endl;
  cout << "Enter your choice" << endl;
  cin >> choice;
  
  double price = 0;
  string pizza;
  if(choice == 1){
      pizza = "Margherita";
        price = 5.99;
  }
  else if(choice == 2){
      pizza = "Pepperoni";
        price = 6.99;
  }
  else if(choice == 3){
      pizza = "BBQ Chicken";
        price = 7.49;
  }
  else if(choice == 4){
      pizza = "Hawaiian ";
        price = 6.99;
  }
  else if(choice == 5){
      pizza = "Veggie Supreme";
        price = 6.49;
  }
  else if(choice == 6){
      pizza = "Meat Lovers";
        price = 7.99;
  }
  else if(choice == 7){
      pizza = "Cheese Burst	";
        price = 6.99;
  }
  else if(choice == 8){
      pizza = "Four Cheese";
        price = 7.49;
  }
  else if(choice == 9){
      pizza = "Meat Lovers";
        price = 7.29;
  }
  else if(choice == 10){
      pizza = "Tuna Melt";
        price = 6.79;
  }
  else {
      cout << "Invalid choice." << endl;
        return 0;
  }
  char topping;
  cout << "Do you want to add some cheese topping for $0.5? (y/n)" << endl;
  cin >> topping;
   if (topping == 'y' || topping == 'Y') {
        price += 0.5;
    }
    
    cout << "Your order: " << pizza << endl;
    cout << "Total price: $" << price << endl;
    cout << "Thank you for ordering!" << endl;

    return 0;
}
