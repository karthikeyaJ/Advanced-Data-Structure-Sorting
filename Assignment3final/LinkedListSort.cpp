

#include "Interfaces03.h"
#include "LinkedListSort.h"

LinkedListSort::LinkedListSort(){}
LinkedListSort::~LinkedListSort(){}

LinkedListNode * LinkedListSort::sort(LinkedListNode * list)
{	

	LinkedListNode *front = NULL;
	LinkedListNode *back = NULL;
	LinkedListNode *last1 = NULL;
	LinkedListNode *last2 = NULL;
	LinkedListNode *mer = NULL;
	if ((list == NULL) || (list->next == NULL))
		{
		return list;
		}
	else
	{
			last1 = list;
			last2 = list->next;
			while (last2->next != NULL)
			{
				last2 = last2->next;

				if (last2->next != NULL)
				{
					last1 = last1->next;
					last2 = last2->next;
				}
				else
				{
					last1 = last1->next;
				}
			}
			front = list;
			back = last1->next;
			last1->next = NULL;
	}
	front=sort(front);
	back=sort(back);
	mer=merge(front,back);
	return mer;
}

LinkedListNode * LinkedListSort::merge(LinkedListNode * front, LinkedListNode * back)
{

	   while (front!=NULL && back!=NULL)
	   {
		    if (front->key <= back->key)
			{
				front->next = merge(front->next, back);
				return front;
			}
			       
		    else
			{
			back->next = merge(front, back->next);
			return back;
			}
			
		}		
	
	   while (front != NULL)
	   {
			   return front;
	   } 
		  
	   while (back != NULL)
	   {
	  		   return back;
	   }
	
}

