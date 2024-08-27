#include <iostream>
#include <cmath>
#include "special_relativity.h"
char choice[5];
char response[5];

using namespace std;


	namespace SpecialRelativity{
		void special_relativity::Momentum() {
			do {
			cout << "Enter the mass of the object (in kg): ";
			cin >> mass;
			cout << "Enter the velocity of the object (in c): ";
			cin >> velocity;
			cout << "\nYou have entered: ";
			cout << velocity << " c for velocity." << endl;
			cout << "You have entered: " << mass << " kg for mass." << endl;
			cout << "Would you like to proceed (Y/n): \n";
			cin >> choice[1];
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n')
				cout << "The option you have entered is invalid" << endl;
			if (velocity > 1) 
				cout << " Velocity of the object cannot be greater than c" << endl;
				cout << "Kindly enter a different value for velocity" << endl;

			} while (choice[1] != 'Y' && choice[1] != 'y' || velocity > 1);
			
		
		momentum = mass * velocity * speed_of_light * gamma(velocity);
		cout << "The momentum is " << momentum << " kgm/s";
		exit(1);
		}

		void special_relativity::Energy() {
			do {
			cout << "Enter the rest mass of the object (in kg) : ";
			cin >> mass;
			cout << "\nThe mass you have entered is: " << mass << " kg.\n";
			cout << "Would you like to proceed (Y/n): ";
			cin >> choice;
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n') 
					cout << "The option you have entered is invalid" << endl;
			
			} while (choice[1] != 'Y' && choice[1] != 'y');

			energy = mass * pow(speed_of_light, 2);
			cout << "The energy is " << energy << "J";
			cout << "Would you like to convert your answer to MeV (Y/n): ";
			cin >> response;
			if (response[1] == 'Y' && response[1] != 'y') {
				double MeV = energy / 1.6e-19;
				cout << "The energy in MeV is " << MeV;
			}
			exit(1);
		}

		void special_relativity::massless_energy() {
			do {
			cout << "Enter the momentum of the object (kgms^-1): ";
			cin >> momentum;
			cout << "The value for momentum you have entered is: " << momentum << " kgms^-1";
			cout << "Would you like to proceed (Y/n): ";
			cin >> choice;
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n') 
				cout << "The option you have entered is invalid\n";
			
			} while (choice[1] != 'Y' && choice[1] != 'y');
			energy = momentum * speed_of_light;
			cout << "The energy is " << energy << "MeV";
			exit(1);
		}

		double special_relativity::gamma(double v) {
			return 1 / sqrt(1 - (pow(v, 2) / pow(speed_of_light, 2)));

		}

		void special_relativity::velocity_transforms() {
			do {
			cout << "Enter the velocity of the object: ";
			cin >> velocity;
			cout << "Enter the velocity relative to the source: ";
			cin >> velocity_observer;
			cout << "\nThe velocity of the object you have entered is: " << velocity << " c" << endl;
			cout << "The velocity relative to the source you have entered is: " << velocity_observer << " c" << endl;
			cout << "Would you like to proceed (Y/n): ";
			cin >> choice;
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n') 
				cout << "The option you have entered is invalid\n";
			if (velocity > 1 || velocity_observer > 1)
				cout << " Velocity of the object cannot be greater than c" << endl;
			cout << "Kindly enter a different value for velocity" << endl;

			} while (choice[1] != 'Y' && choice[1] != 'y' || velocity > 1 || velocity_observer > 1);

			velocity = (velocity + velocity_observer) / (1 + (velocity * velocity_observer) / pow(speed_of_light, 2));
			cout << "The velocity of the object is " << velocity << "m/s";
			exit(1);

		}

		void special_relativity::doppler_effect() {
			do {
			cout << "Enter the frequency of the object (Hz): ";
			cin >> frequency;
			cout << "Enter the velocity of the object (c): ";
			cin >> velocity;
			cout << "Enter the velocity of the observer (c): ";
			cin >> velocity_observer;
			cout << "\nYou have entered: " << frequency << " Hz for the frequency of the object.\n";
			cout << "You have entered: " << velocity << " c for the velocity of the object\n";
			cout << "You have entered: " << velocity_observer << " c for the velocity of the observer\n";
			cout << "Would you like to proceed (Y/n): ";
			cin >> choice;
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n') 
				cout << "The option you have entered is invalid. \n";
			if (velocity > 1 || velocity_observer > 1)
				cout << " Velocity of the object cannot be greater than c" << endl;
			cout << "Kindly enter a different value for velocity" << endl;

			} while (choice[1] != 'Y' && choice[1] != 'y' || velocity > 1 || velocity_observer > 1);

			frequency_sol = frequency * sqrt((1 + velocity) / (1 - velocity));
			cout << "The frequency is " << frequency_sol << " Hz";
			exit(1);
		}

		void special_relativity::doppler_effect_wavelength() {
			do {
			cout << "Enter the wavelength of the object: ";
			cin >> wavelength;
			cout << "\nEnter the velocity of the object: ";
			cin >> velocity;
			cout << "\nEnter the velocity of the observer: ";
			cin >> velocity_observer;
			cout << "\nThe object wavelength is: " << wavelength << " nm";
			cout << "\nThe object velocity is: " << velocity << " c";
			cout << "\nThe velocity of the observer is: " << velocity_observer << " c";
			cout << "\nWould you like to proceed (Y/n): ";
			cin >> choice;
			if (choice[1] != 'Y' && choice[1] != 'y' && choice[1] != 'N' && choice[1] != 'n') 
				cout << "The option you have entered is invalid.";
			if (velocity > 1 || velocity_observer > 1)
				cout << " Velocity of the object cannot be greater than c" << endl;
			cout << "Kindly enter a different value for velocity" << endl;

			} while (choice[1] != 'Y' && choice[1] != 'y' || velocity > 1 || velocity_observer > 1);

			wavelength_sol = wavelength * sqrt((1 - velocity) / (1 + velocity));
			cout << "The wavelength is " << wavelength_sol << " nm";
			exit(1);
		}

		
	}

	 