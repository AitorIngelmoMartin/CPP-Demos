#include <iostream>
#include <string>

using namespace std;

void myFunction() {    
  // code to be executed
  cout << "Hi from my function" << endl;
}

void myFunctionWithParameters(int parameter1, string parameter2) {    
  // code to be executed
    cout << "Parámetro 1: " << parameter1 << endl;
    cout << "Parámetro 2: " << parameter2 << endl;
}

void myFunctionWithInput() {    
  // code to be executed
    int x; 
    cout << "Type a number: "; // Type a number and press enter
    cin >> x; // Get user input from the keyboard
    cout << "Your number is: " << x; // Display the input value
}

int main(int argc, char const * argv[]){
    myFunction();

    int variable_int = 6;
    string variable_string = "AITOR";
    myFunctionWithParameters(variable_int,variable_string);

    //myFunctionWithInput();

    for (int i = 0; i < 5; i++) {
        cout << i << "\n";
    }

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        cout << "Valor del array: " << i << "\n";
    }

}






