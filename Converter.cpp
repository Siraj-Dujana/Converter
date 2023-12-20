#include <iostream>
#include <iomanip>
#include<windows.h>//for clear screeen
#include<unistd.h>//for sleep
#include<conio.h>//for gtch
using namespace std;
HANDLE
color=GetStdHandle(STD_OUTPUT_HANDLE);//to set colors

// Function prototypes
void distanceLengthConverter();
void currencyConverter();
void temperatureConverter();
void load();

int main() {
            
	int choice;
	
	do {
		SetConsoleTextAttribute(color,1);
		load();

		// Display menu
		cout<<"___________________________________\n\n";
		cout<<"\tMY CONVERTER\n";
		cout<<"___________________________________\n\n";
		     cout<< "1. Distance & Length Converter\n"
		     << "2. Temperature Converter\n"
		     << "3. Currency Converter\n"
		     << "4. Exit\n"
		     << "Enter your choice: ";

		// Get user choice
		cin >> choice;

		// Perform action based on user choice
		switch (choice) {
			case 1:
				distanceLengthConverter();
				break;
			case 2:
				temperatureConverter();
				break;
			case 3:
				currencyConverter();
				break;
			case 4:
				cout << "Exiting program. Goodbye!\n";
				break;
			default:
				cout << "Invalid choice. Please enter a number between 1 and 5.\n";
		}

	} while (choice != 4);

	return 0;
}


void distanceLengthConverter() {
	int choice;

	do {
		SetConsoleTextAttribute(color,6);
		load();

		// Display distance and length converter menu
		cout << "Distance and Length Converter Menu:\n"
		     << "1. Kilometers to Miles\n"
		     << "2. Miles to Kilometers\n"
		     << "3. Meters to Miles\n"
		     << "4. Miles to Meters\n"
		     << "5. Yards to Feet\n"
		     << "6. Feet to Yards\n"
		     << "7. Inches to Centimeters\n"
		     << "8. Centimeters to Inches\n"
		     << "9. Nautical Miles to Kilometers\n"
		     << "10. Kilometers to Nautical Miles\n"
		     << "Enter your choice (1-10, 0 to go back): ";

		// Get user choice
		cin >> choice;

		// Perform action based on user choice
		switch (choice) {
			case 1:
				// Conversion logic for Kilometers to Miles
				double kmToMiles;
				cout << "Enter distance in kilometers: ";
				cin >> kmToMiles;
				cout << kmToMiles << " kilometers is equal to " << kmToMiles * 0.621371 << " miles.\n";
				break;
			case 2:
				// Conversion logic for Miles to Kilometers
				double milesToKm;
				cout << "Enter distance in miles: ";
				cin >> milesToKm;
				cout << milesToKm << " miles is equal to " << milesToKm / 0.621371 << " kilometers.\n";
				break;
			case 3:
				// Conversion logic for Meters to Miles
				double metersToMiles;
				cout << "Enter length in meters: ";
				cin >> metersToMiles;
				cout << metersToMiles << " meters is equal to " << metersToMiles * 0.000621371 << " miles.\n";
				break;
			case 4:
				// Conversion logic for Miles to Meters
				double milesToMeters;
				cout << "Enter length in miles: ";
				cin >> milesToMeters;
				cout << milesToMeters << " miles is equal to " << milesToMeters / 0.000621371 << " meters.\n";
				break;
			case 5:
				// Conversion logic for Yards to Feet
				double yardsToFeet;
				cout << "Enter length in yards: ";
				cin >> yardsToFeet;
				cout << yardsToFeet << " yards is equal to " << yardsToFeet * 3 << " feet.\n";
				break;
			case 6:
				// Conversion logic for Feet to Yards
				double feetToYards;
				cout << "Enter length in feet: ";
				cin >> feetToYards;
				cout << feetToYards << " feet is equal to " << feetToYards / 3 << " yards.\n";
				break;
			case 7:
				// Conversion logic for Inches to Centimeters
				double inchesToCm;
				cout << "Enter length in inches: ";
				cin >> inchesToCm;
				cout << inchesToCm << " inches is equal to " << inchesToCm * 2.54 << " centimeters.\n";
				break;
			case 8:
				// Conversion logic for Centimeters to Inches
				double cmToInches;
				cout << "Enter length in centimeters: ";
				cin >> cmToInches;
				cout << cmToInches << " centimeters is equal to " << cmToInches / 2.54 << " inches.\n";
				break;
			case 9:
				// Conversion logic for Nautical Miles to Kilometers
				double nauticalMilesToKm;
				cout << "Enter distance in nautical miles: ";
				cin >> nauticalMilesToKm;
				cout << nauticalMilesToKm << " nautical miles is equal to " << nauticalMilesToKm * 1.852 << " kilometers.\n";
				break;
			case 10:
				// Conversion logic for Kilometers to Nautical Miles
				double kmToNauticalMiles;
				cout << "Enter distance in kilometers: ";
				cin >> kmToNauticalMiles;
				cout << kmToNauticalMiles << " kilometers is equal to " << kmToNauticalMiles / 1.852 << " nautical miles.\n";
				break;
			case 0:
				cout << "Going back to the main menu.\n";
				break;
			default:
				cout << "Invalid choice. Please enter a number between 0 and 10.\n";
		}
		cout << "Press any key";
		getch();
	} while (choice != 0);
}


void temperatureConverter() {
	int choice;
	do {

		load();
		SetConsoleTextAttribute(color,5);
		// Display temperature converter menu
		cout << "Temperature Converter Menu:\n"
		     << "1. Celsius to Fahrenheit\n"
		     << "2. Fahrenheit to Celsius\n"
		     << "Enter your choice (1-2, 0 to go back): ";

		// Get user choice
		cin >> choice;

		// Perform action based on user choice
		switch (choice) {
			case 1:
				// Conversion logic for Celsius to Fahrenheit
				double celsiusToFahrenheit;
				cout << "Enter temperature in Celsius: ";
				cin >> celsiusToFahrenheit;
				cout << celsiusToFahrenheit << " Celsius is equal to " << (celsiusToFahrenheit * 9 / 5) + 32 << " Fahrenheit.\n";
				break;
			case 2:
				// Conversion logic for Fahrenheit to Celsius
				double fahrenheitToCelsius;
				cout << "Enter temperature in Fahrenheit: ";
				cin >> fahrenheitToCelsius;
				cout << fahrenheitToCelsius << " Fahrenheit is equal to " << (fahrenheitToCelsius - 32) * 5 / 9 << " Celsius.\n";
				break;
			case 0:
				cout << "Going back to the main menu.\n";
				break;
			default:
				cout << "Invalid choice. Please enter a number between 0 and 2.\n";
		}
		cout << "Press any key";
		getch();
	} while (choice != 0);
}

void currencyConverter() {
	int choice;
	
	do {
SetConsoleTextAttribute(color,4);
		load();
		// Display currency converter menu
		cout << "Currency Converter Menu:\n"
		     << "1. USD to Pakistani Rupees\n"
		     << "2. Euro to USD\n"
		     << "3. USD to British Pound\n"
		     << "4. British Pound to USD\n"
		     << "5. USD to Japanese Yen\n"
		     << "6. Japanese Yen to USD\n"
		     << "7. Euro to British Pound\n"
		     << "8. British Pound to Euro\n"
		     << "9. Euro to Japanese Yen\n"
		     << "10. Japanese Yen to Euro\n"
		     << "Enter your choice (1-10, 0 to go back): ";

		// Get user choice
		cin >> choice;

		// Perform action based on user choice
		switch (choice) {
			case 1:
				// Conversion logic for USD to Pakistani Rupees
				double usdToPakRupees;
				cout << "Enter amount in USD: ";
				cin >> usdToPakRupees;
				cout << usdToPakRupees << " USD is equal to " << usdToPakRupees * 276.0 << " Pakistani Rupees.\n";
				break;
			case 2:
				// Conversion logic for Euro to USD
				double euroToUsd;
				cout << "Enter amount in Euro: ";
				cin >> euroToUsd;
				cout << euroToUsd << " Euro is equal to " << euroToUsd / 0.85 << " USD.\n";
				break;
			case 3:
				// Conversion logic for USD to British Pound
				double usdToGbp;
				cout << "Enter amount in USD: ";
				cin >> usdToGbp;
				cout << usdToGbp << " USD is equal to " << usdToGbp * 0.75 << " British Pound.\n";
				break;
			case 4:
				// Conversion logic for British Pound to USD
				double gbpToUsd;
				cout << "Enter amount in British Pound: ";
				cin >> gbpToUsd;
				cout << gbpToUsd << " British Pound is equal to " << gbpToUsd / 0.75 << " USD.\n";
				break;
			case 5:
				// Conversion logic for USD to Japanese Yen
				double usdToJpy;
				cout << "Enter amount in USD: ";
				cin >> usdToJpy;
				cout << usdToJpy << " USD is equal to " << usdToJpy * 110.0 << " Japanese Yen.\n";
				break;
			case 6:
				// Conversion logic for Japanese Yen to USD
				double jpyToUsd;
				cout << "Enter amount in Japanese Yen: ";
				cin >> jpyToUsd;
				cout << jpyToUsd << " Japanese Yen is equal to " << jpyToUsd / 110.0 << " USD.\n";
				break;
			case 7:
				// Conversion logic for Euro to British Pound
				double euroToGbp;
				cout << "Enter amount in Euro: ";
				cin >> euroToGbp;
				cout << euroToGbp << " Euro is equal to " << euroToGbp * 0.89 << " British Pound.\n";
				break;
			case 8:
				// Conversion logic for British Pound to Euro
				double gbpToEuro;
				cout << "Enter amount in British Pound: ";
				cin >> gbpToEuro;
				cout << gbpToEuro << " British Pound is equal to " << gbpToEuro / 0.89 << " Euro.\n";
				break;
			case 9:
				// Conversion logic for Euro to Japanese Yen
				double euroToJpy;
				cout << "Enter amount in Euro: ";
				cin >> euroToJpy;
				cout << euroToJpy << " Euro is equal to " << euroToJpy * 130.0 << " Japanese Yen.\n";
				break;
			case 10:
				// Conversion logic for Japanese Yen to Euro
				double jpyToEuro;
				cout << "Enter amount in Japanese Yen: ";
				cin >> jpyToEuro;
				cout << jpyToEuro << " Japanese Yen is equal to " << jpyToEuro / 130.0 << " Euro.\n";
				break;
			case 0:
				cout << "Going back to the main menu.\n";
				break;
			default:
				cout << "Invalid choice. Please enter a number between 0 and 10.\n";
		}
		cout << "Press any key";
		getch();

	} while (choice != 0);
}
void load() {
	system("CLS");
	cout << "Loading.................................";
	sleep(2);
	system("CLS");
}
