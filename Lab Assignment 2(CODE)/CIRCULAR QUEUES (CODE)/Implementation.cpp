#include <iostream>	
// allows program to perform input and output

#include "Queue.h"
// link header to implementation

using namespace std;
// use std namespace

Queue::Queue()
{
	intCount = 0;
	front = -1;
	rear = -1;
	for(int i=0;i<5;i++)
	{
		arr[i]=0;
	}
}
// Default contructor that assign intCount to 0 and both 
// front and rear to -1. User for loop to initialize i to
// 0, i less than the size of the array and increment i
// assign array to be 0.

bool Queue::isEmpty()
{
	if(front == -1 && rear == -1)
		return true;
	else
		return false;
}
// Function to determine whether the Queue is empty or not.
// If the queue is empty, then both front and rear are equal
//to -1 after return. Otherwise return false

bool Queue::isFull()
{
	if((rear+1)%5 == front)
		return true;
	else
		return false;
}
// Function to determine whether the Queue is full or not.
// If the queue is full. If front is assign to (rear + 1) 
//% size of the array, then return true. Otherwise return false

void Queue::enqueue(int val)
{
	if(isFull())
	{
		cout<<"Queue is Full"<<endl;
		return;
	}
	else if(isEmpty())
	{
		rear = 0;
		front =0;
		arr[rear] = val;
	}
	else
	{
		rear = (rear+1)%5;
		arr[rear]=val;
	}
	intCount++;
}
// Function enqueue will return vaL, inside isFull function is checking
//whether queue if full or not, then if it is full print Queue is Full.
// Function isEmpty is checking whether queue is empty or not, then if it
//is empty assign 0 to both front and rear and assign val to the array of
//rear. If it is not full and is not empty assign (rear + 1) % size to
// rear and assign val to the array of rear. After all increment intCount.

int Queue::dequeue()
{
	int x = 0;
	
	if(isEmpty())
	{
		cout<<"Queue is Empty"<<endl;
		return x;		
	}		
	else if(rear == front)
		{
			x = arr[rear];
			rear = -1;
			front = -1;
			intCount--;
			return x;
		}
		
	else
		{
			cout<<"front value: "<<front<<endl;
			x = arr[front];
			arr[front] = 0;
			front = (front+1)%5;
			intCount--;
			return x;
		}
}
// Function Queue i declare integer variable which is x. Function isEmpty
// check if the queue is empty or not, then if it is empty print Queue is
// Empty. else if statement check if the rear is equal to front, then assign 
//array of rear to x, assign -1 to both rear and front, decrement intCount 
// then return x. If it is not empty or rear is equal front, then print front
// value after assign array of front to x, assign 0 to array of front. Assign
//(front + 1) % array size to front and decrement the value intCount then return x.

int Queue::count()
{
	return(intCount);
}
// Function count return intCount which count the number of element in queue.

void Queue::display()
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

