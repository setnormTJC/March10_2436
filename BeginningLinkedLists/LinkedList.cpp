#include "LinkedList.h"

LinkedList::LinkedList(const std::string& theDataInitiallyAtFront)
{

	LinkedList::pHeadNode->theDataOfInterest = theDataInitiallyAtFront;
	pHeadNode->addressOfNextNode = nullptr; 
}

void LinkedList::addDataAtFront(const std::string& theDataToAddAtFront)
{
	std::unique_ptr<Node> pNewNode = std::make_unique<Node>(); 

	pNewNode->theDataOfInterest = theDataToAddAtFront; 

	pNewNode->addressOfNextNode = std::move(pHeadNode);

	pHeadNode = std::move(pNewNode); 

}
