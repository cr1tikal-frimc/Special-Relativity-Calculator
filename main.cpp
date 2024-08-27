#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include "special_relativity.h"

using namespace std; 
using namespace SpecialRelativity;

int main() {
	special_relativity firsttest;
	int choice;

	do {
		try
		{

			cout << "\nThis is a program made to solve some equations in the special relativity course\n"
				<< "Kindly input the calculation you want to be done. \n"
				<< "1. momentum\n"
				<< "2. Energy(massless)\n"
				<< "3. Energy( rest mass)\n"
				<< "4. Doppler effect (Frequency)\n"
				<< "5. Doppler effect (Wavelength)\n"
				<< "6. Lorentz velocity transform (x-axis)\n"
				<< "7. Exit\n\n"
				<< "Enter your choice: ";





			cin >> choice;

			switch (choice) {
			case 1:
				firsttest.Momentum();
			case 2:
				firsttest.Energy();
			case 3:
				firsttest.massless_energy();
			case 4:
				firsttest.doppler_effect();
			case 5:
				firsttest.doppler_effect_wavelength();
			case 6:
				firsttest.velocity_transforms();
			case 7:
				exit(1);
			default:
				throw choice;

			}
		}
		catch (int x) {
			cout << "Invalid choice. Please enter a valid choice" << endl;
		}
	} while (choice != 7);
	
return 0;
}
