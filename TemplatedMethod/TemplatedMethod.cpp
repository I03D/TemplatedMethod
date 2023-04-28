#include <iostream>
#include "Coffee.h"
#include "Tea.h"
using namespace std;

int main()
{
	Coffee* myCoffee = new Coffee();
	Tea* myTea = new Tea();

	myCoffee->prepareRecipe();
	cout << "\n-----------------------\n\n";
	myTea->prepareRecipe();
}
