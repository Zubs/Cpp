//All important libraries are imported or "#include"-d here
#include <iostream>
#include <limits> //The library for limits of C++ objects
using namespace std;

int main() { //This is the beginning of any C++ program
	
	//Learning the assignment operator
	//Trying out basic arithmetic operations
	int age = 10;
	int sum = age * 2; //The multiplication operator
	int dot = age / 2; //The division
	int min = age - 2; //The subtraction
	int sq = age % 2; //The modulus: This returns the remainder when,in this case, 10 is divided by 2
	
	//Practising how to output variables
	cout << age << endl; //Outputs 10
	cout << sum << endl; //Outputs 20
	cout << dot << endl; //Outputs 5
	cout << min <<endl; //Outputs 8
	cout << sq << endl; //Outputs 0
	
	//Learnt string concatenation
	string name = "Jon Momoh";
	string about = " is a good friend";
	string bio = name + about; //Concatenates "name" and "bio"
	
	//Learning chaining as an alternative to string concatenation
	cout << name << about << endl; //Outputs "Jon Momoh is a good friend"
	cout << bio << endl; //Outputs "Jon Momoh is a good friend"
	
	//Getting user input
	cout << "What's your name: "; //Display a message to prompt user
	string input; //Declare an empty variable, this will be used to store user input
	cin >> input; //Stores the user response to the empty variable
	cout << "Your name is " << input << endl; // Output the user response back to them
	
	//Made my first ever program that gets user input, returns the square of the input, its product with 10, its sum with 10 and its difference from 10.
	cout << "Enter any number: "; //Prompts the user for an input
	int num; //Creates an empty variable to store the incoming data
	cin >> num; //Gets the data into the variable
	cout << "The square of " << num << " is " << num * num << endl;
	cout << "The product of " << num << " and 10 is " << num * 10 << endl;
	cout << "The sum of " << num << " and 10 is " << num + 10 << endl;
	cout << "The difference between " << num << " and 10 is " << num - 10 << endl;
	
	//Testing the max values of the "int" keyword
	int madNum = 678526803210551262506015657685250526082356520; //This number is not outputted as it's larger than what the "int" can store
	cout << madNum << endl;
	
	//Using the <limits> library to get max and min values of the "int"
	cout << "The maximum value of int is " << INT_MAX << endl;
	cout << "The minimum value of int is " << INT_MIN << endl;
	
	//Using "long int" to take greater values
	long int longNum = 908979695;
	cout << longNum << endl;
	
	//Using the <limits> library to get max and min values of the "int"
	cout << "The maximum value of long int is " << LONG_MAX << endl;
	cout << "The minimum value of long int is " << LONG_MIN << endl;
	
	//Using "short int" just to learn
	short int sValue = 15600;
	cout << sValue << endl;
	
	//Using the <limits> library to get max and min values of the "int"
	cout << "The maximum value of short int is " << SHRT_MAX << endl;
	cout << "The minimum value of short int is " << SHRT_MIN << endl;
	
	//Using "sizeof" to know the memory used by a data type
	cout << "The size of an int is " << sizeof(int) << endl;
	cout << "The size of a long int is " << sizeof(long int) << endl;
	cout << "The size of a short int is " << sizeof(short int) << endl;
	
	return 0;
	
}
