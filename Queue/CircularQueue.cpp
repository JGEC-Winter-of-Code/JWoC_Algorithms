#include<bits/stdc++.h> 
using namespace std; 

struct Queue 
{ 
	int rear, front; 
	int size; 
	char *arr; 
	Queue(int s) 
	{ 
    	front = rear = -1; 
	    size = s; 
	    arr = new char[s]; 
	} 
	void enQueue(char value); 
	char deQueue(); 
	void displayQueue(); 
}; 
void Queue::enQueue(char value) 
{ 
	if ((front == 0 && rear == size-1) ||(rear == (front-1)%(size-1))) 
	{ 
		cout<<"\nQueue is Full"; 
		return; 
	} 
	else if (front == -1) 
	{ 
		front = rear = 0; 
		arr[rear] = value; 
	} 

	else if (rear == size-1 && front != 0) 
	{ 
		rear = 0; 
		arr[rear] = value; 
	} 

	else
	{ 
		rear++; 
		arr[rear] = value; 
	} 
} 

char Queue::deQueue() 
{ 
	if (front == -1) 
	{ 
		cout<<"\nQueue is Empty"; 
		return INT_MIN; 
	} 
	char data = arr[front]; 
	arr[front] = -1; 
	if (front == rear) 
	{ 
		front = -1; 
		rear = -1; 
	} 
	else if (front == size-1)
	{
		front = 0; 
	}
	else
	{
		front++; 
	}
	return data; 
} 

void Queue::displayQueue() 
{ 
	if (front == -1) 
	{ 
		cout<<"\nQueue is Empty"; 
		return; 
	} 
	cout<<"\nElements in Circular Queue are: "; 
	if (rear >= front) 
	{ 
		for (int i = front; i <= rear; i++) 
			cout<<arr[i]<<" "; 
	} 
	else
	{ 
		for (int i = front; i < size; i++) 
			cout<<arr[i]<<" "; 

		for (int i = 0; i <= rear; i++) 
			cout<<arr[i]<<" "; 
	} 
} 

int main() 
{ 
    Queue q(5); 
    int choice=1;
    do
    {
        cout<<"\n1. EnQueue 2. DeQueue 3. Exit : ";
        cin>>choice;
        if(choice==1)
        {
            char a;
            cin>>a;
            q.enQueue(a);
            q.displayQueue();
        }
        else if(choice==2)
        {
            cout<<"\nDeleted value = "<<q.deQueue(); 
            cout<<endl;
            q.displayQueue();
        }
    }while(choice!=3);
    q.displayQueue();
    return 0; 
} 
