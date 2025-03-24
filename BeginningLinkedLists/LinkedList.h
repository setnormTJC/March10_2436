#pragma once

#include <iostream>
#include<memory> //gives access to "smart" pointers


class Node
{
public:
	std::string theDataOfInterest;
	std::unique_ptr<Node> addressOfNextNode;
	/*The smarter alternative to:
	* Node* addressOfNextNode*/
};

/*A LINKED LIST is COMPOSED of NODES*/
class LinkedList
{
public: 
	//Node firstNode; 
	//Node secondNode; 
	//Node thirdNode; //probably not a good way to go about it!
	
	std::unique_ptr<Node> pHeadNode = std::make_unique<Node>();; //p as in a pointer to the head node 
	LinkedList() = delete; 
	LinkedList(const std::string& theDataInitiallyAtFront);

	void addDataAtFront(const std::string& theDataToAddAtFront);

};

