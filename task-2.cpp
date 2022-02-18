#include <iostream>
using namespace std;

float ploshad(float dlina_1, float dlina_2) 
{
	return dlina_1 * dlina_2;
}

int main()

{
	float dlina_1, dlina_2;
	cin >> dlina_1;
	cin >> dlina_2;
	cout << ploshad(dlina_1, dlina_2) << endl;
}

