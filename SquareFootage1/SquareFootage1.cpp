// Jonathan Vertiz
// ITSE 1307
// Square Footage
// SquareFootage1.cpp : Takes the square footage and price of a house and calculates the best price per square foot

#include "stdafx.h"
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
	//Take in all the values we'll need
	int intSquareAlpha = 0;
	int intSquareBravo = 0;
	int intSquareCharlie = 0;
	int intBasePriceAlpha = 0;
	int intBasePriceBravo = 0;
	int intBasePriceCharlie = 0;
	int intSquarePriceAlpha = 0;
	int intSquarePriceBravo = 0;
	int intSquarePriceCharlie = 0;

	/* Asks the user to input the square footage and base price
	of the first house to calculate the price per square foot*/
	cout << "Enter the Square footage of the colonial house: ";
	cin >> intSquareAlpha;
	cout << "Enter the base price: ";
	cin >> intBasePriceAlpha;
	intSquarePriceAlpha = (intBasePriceAlpha / intSquareAlpha);
	cout << "Your price per square foot is: " << intSquarePriceAlpha
		<< endl;

	/* Asks the user to input the square footage and base price
	of the second house to calculate the price per square foot*/
	cout << "Enter the Square footage of the split-entry house: ";
	cin >> intSquareBravo;
	cout << "Enter the base price: ";
	cin >> intBasePriceBravo;
	intSquarePriceBravo = (intBasePriceBravo / intSquareBravo);
	cout << "Your price per square foot is: " << intSquarePriceBravo
		<< endl;

	/* Asks the user to input the square footage and base price
	of the third house to calculate the price per square foot*/
	cout << "Enter the Square footage of the singe story house: ";
	cin >> intSquareCharlie;
	cout << "Enter the base price: ";
	cin >> intBasePriceCharlie;
	intSquarePriceCharlie = (intBasePriceCharlie / intSquareCharlie);
	cout << "Your price per square foot is: " << intSquarePriceCharlie
		<< endl;

	//If statement that calculates which is the smallest price for the best deal
	cout << "The best price per square foot is: ";
	if (intSquarePriceAlpha < intSquarePriceBravo && intSquarePriceAlpha < intSquarePriceCharlie)
	{
		cout << "Colonial house" << endl;
	}
	else
		if (intSquarePriceBravo < intSquarePriceCharlie && intSquarePriceBravo < intSquarePriceAlpha)
	{
		cout << "Double-entry house" << endl;
	}
	else 
		cout << "Single story house" << endl;
	return 0;
}

