
#pragma once
//***************************************************************************************
// File: Game.cpp
//
// Purpose: Declarations class member functions
//
// Written By: Kyle Gerken
//
// COmpiler: Visual C++ 2019
//
// Update Information:
// -----------------------------
// Name: Kyle Gerken
// Date: 9/18/2021
// Description:		- Created Private member variables: Title, ESRB, and Price
//					- Created appropriate Set/Get methods
//					- Overloaded "operator=" and "operator<<"  for appropriate object usage
// 
// Name: Kyle Gerken
// Date: 10/3/2021
//
//***************************************************************************************


#include <iostream>
#include <string>
#include <iomanip>

class Game
{
	//Members = Title, ESRB, and Price for Game Class
private:
	std::string *m_title;
	std::string *m_esrb;
	double *m_price;

public:
	/*************** Constructors *******************/
	//Default constructor
	Game();
	//Paramaterized Constructor
	Game(std::string title, std::string esrb, double price);
	//Copy Constructor
	Game(const Game& obj);
	//Destructor
	~Game();

	/**************** Setters *********************/
	void setTitle(std::string title);

	void setEsrb(std::string esrb);

	void setPrice(double d);

	/*************** Getters ***********************/
	std::string getTitle();

	std::string getEsrb();

	double getPrice();

	/********* Assignment overloads ************/
	//Member overload
	Game& operator=(const Game& rhs);

	//Non-Member overloads
	friend std::ostream& operator<<(std::ostream& os, const Game& rhs);

	friend std::istream& operator>>(std::istream& is, const Game& rhs);
};