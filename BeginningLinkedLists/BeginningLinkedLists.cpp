// BeginningLinkedLists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include"LinkedList.h"


int main()
{
	
	auto ourFirstLovelyNode = std::make_unique<Node>();  //perhaps use AUTO here ...

	//this code is the SMARTER version of: 
	//Node* firstNode = new Node; 
	//delete firstNode;  //eventually this must be called to prevent memory leak

	ourFirstLovelyNode->theDataOfInterest = "Alice";
	
	auto ourSecondNode = std::make_unique<Node>(); 
	ourSecondNode->theDataOfInterest = "Bob";

	//make a LINK (not to be confused with Zelda) between first and second nodes
	ourFirstLovelyNode->addressOfNextNode = std::move(ourSecondNode); 


	//add A THIRD node: 
	auto thirdNode = std::make_unique<Node>(); 
	thirdNode->theDataOfInterest = "Carol";

	//make third node the LAST node in the list: 
	thirdNode->addressOfNextNode = nullptr; 

	//NOW, link the second node to the third: 
	//ourSecondNode->addressOfNextNode = std::move(thirdNode); //when you use MOVE, "funny business happens"
	ourFirstLovelyNode->addressOfNextNode->addressOfNextNode = std::move(thirdNode);

	//can we get the contents of the third node? 

	//std::cout << thirdNode->theDataOfInterest << "\n";//carol? //NOPE! thirdNode has been "moved"

	std::cout << ourFirstLovelyNode->addressOfNextNode->addressOfNextNode->theDataOfInterest << "\n"; //carol?

	std::cout << ourFirstLovelyNode->addressOfNextNode->addressOfNextNode->addressOfNextNode->theDataOfInterest << "\n";
	//dereferences nullptr (throws exception)

}

