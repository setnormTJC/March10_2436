#pragma once

#include <iostream>
#include<memory> //gives access to "smart" pointers


class Node
{
public:
	std::string theDataOfInterest;
	std::unique_ptr<Node> addressOfNextNode;
};

/*A LINKED LIST is COMPOSED of NODES*/
class LinkedList
{
};

