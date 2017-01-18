#include <iostream>
#include <iomanip>
using namespace std;

void getmass(float *massPtr);
void getvelocity(float *velocityPtr);
void calculate(float *massPtr, float *velocityPtr, float *kePtr);
void display(const float *kePtr);

void main()
{
	float mass, velocity, ke;
	float *massPtr, *velocityPtr, *kePtr;
	massPtr = &mass;
	velocityPtr = &velocity;
	kePtr = &ke;
	getmass(massPtr);
	getvelocity(velocityPtr);
	calculate(massPtr, velocityPtr, kePtr);
	display(kePtr);
}
void getmass(float *massPtr)
{
	do
	{
		cout << "Enter the mass (kg): ";
		cin >> *massPtr;
	} while (*massPtr <= 0.0);
}
void getvelocity(float *velocityPtr)
{
	while (*velocityPtr <= 0.0)
	{
		cout << "Enter the velocity (meters per seconds): ";
		cin >> *velocityPtr;
	}
}
void calculate(float *massPtr, float *velocityPtr, float *kePtr)
{
	*kePtr = 0.5 * *massPtr * (*velocityPtr * *velocityPtr);
}
void display(const float *kePtr)
{
	cout << "The Kinetic Energy is: " << setprecision(2) << fixed << showpoint << *kePtr << " J\n";
	system("pause");
}
/*
Enter the mass (kg): 5
Enter the velocity (meters per seconds): 20
The Kinetic Energy is: 1000.00 J
Press any key to continue . . .
*/