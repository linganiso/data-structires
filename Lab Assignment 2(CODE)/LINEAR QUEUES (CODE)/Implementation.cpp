#include <iostream>	
// allows program to perform input and output

#include "Queue.h"
// link header to implementation

using namespace std;
// use std namespace

Queues::Queues()
{
	front = -1;
	rear = -1;
	for(int i=0;i<5;i++)
	{
		arr[i]=0;
	}
}
// Default contructor that assign both front and rear to -1.
//User for loop to initialize i to 0, i less than the size
//of the array and increment i assign array to be 0.

bool Queues::isEmpty()
{
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}
// Function to determine whether the Queue is empty or not.
// If the queue is empty, then both front and rear are equal
//to -1 after return. Otherwise return false

bool Queues::isFull()
{
	if(rear == size - 1)
		return true;
	else
		return false;
}
// Function to determine whether the Queue is full or not.
// If the queue is full. If 4 is assign to size of the array
// minus 1, then return true. Otherwise return false

void Queues::enqueue(int val)
{
	if(isFull())
	{
		cout<<"Queue is Full"<<endl;
		return;
	}
	else if(isEmpty())
	{
		rear = 0;
		front = 0;
		arr[rear] = val;
	}
	else
	{
		rear++;
		arr[rear] = val;
	}
}
// Function enqueue will return vaL, inside isFull function is checking
//whether queue if full or not, then if it is full print Queue is Full.
// Function isEmpty is checking whether queue is empty or not, then if it
//is empty assign 0 to both front and rear and assign val to the array of
//rear. If it is not full and is not empty increment rear and assign val to
//array of rear.

int Queues::dequeue()
{
	int x;
	
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
		return 0;		
	}		
	else if(front == rear)
		{
			x = arr[front];
			rear = -1;
			front = -1;
			arr[front]=x;
		}
		
	else
		{
			x = arr[front];
			arr[front] = 0;
			front++;
			return x;
		}
}
// Function dequeue declare integer variable x. Check if queue is
//empty or not, then if queue is empty print Queue is Empty then 
//return 0. else if front is equl to rear, then assign array of front
//to x, assign both front and rear to -1 and assign x to array of 
//front. So is the queue is not empty or front is not equal to rear,
//then assign array of front to xand assign 0 to array of front. 
// Increment front and return x.

int Queues::count()
{
	return(rear-front+1);
}
// Function count determine to return (rear - front + 1)

void Queues::display()
{
	cout<<"All Values in the Queue are - "<<endl;
	for(int i=0;i<5;i++)
	{
		cout<<arr[i]<<" ";
	}
}
// Function display print All Values in the Queue are on the screen. Uses for 
//loop to assign 0 to i, i is less than the array size and increment
// i. inside for loop i print all the elements in a array queue.
