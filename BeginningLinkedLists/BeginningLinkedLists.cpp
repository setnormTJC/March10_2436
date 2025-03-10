// BeginningLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<memory> //gives access to "smart" pointers
#include<queue> 

class Car
{
public: 
	std::string make; //ex: "Ford"
	int mileage; //ex: has 80,000 miles on odometer 
};

class Node
{
public: 
	std::string theDataOfInterest; 
	std::unique_ptr<Node> addressOfNextNode; 
};


int main()
{
	//this code is the SMARTER version of: 
	//Node* firstNode = new Node; 
	//delete firstNode; 
	
	std::unique_ptr<Node> ourFirstLovelyNode = std::make_unique<Node>(); 

	ourFirstLovelyNode->theDataOfInterest = "Alice";
	
	std::unique_ptr<Node> ourSecondNode = std::make_unique<Node>(); 
	ourSecondNode->theDataOfInterest = "Bob";

	//make a LINK (not to be confused with Zelda) between first and second nodes
	ourFirstLovelyNode->addressOfNextNode = std::move(ourSecondNode); 

	//while (true)
	//{
	//	std::unique_ptr<Car> OTHERptrToCar = std::make_unique<Car>(); 

	//	OTHERptrToCar->
	//	Car* ptrToCar = new Car;
	//	
	//	ptrToCar->make
	//	//delete i; 
	//}
}

