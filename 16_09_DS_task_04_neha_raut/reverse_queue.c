#include <stdio.h>
#include <stdlib.h>
​
#define MAX 20
​
// Structure for stack
struct Stack{
    int st[MAX];
    int top;
}s;
​
// Function to check if stack is full
int isFullStack(){
    if(s.top == (MAX-1)){
        return 1;
    }
    return 0;
}
​
// Function to check if stack is empty
int isEmptyStack(){
    if(s.top == -1){
        return 1;
    }
    return 0;
}
​
// Function to push element to stack
void push(int data){
    if(isFullStack(s)){
        printf("[!!] Overflow \n");
        exit(0);
    }else{
        s.st[++(s.top)] = data;
        return;
    }
}
​
// Function to pop element from stack
int pop(){
    if(isEmptyStack(s)){
        printf("[!!] Underflow \n");
        exit(1);
    }else{
        int x;
        x = s.st[s.top];
        (s.top)--;
        return x;
    }
}
​
// Function to return top element
int topElement(){
    if(isEmptyStack){
        printf("[!!] Underflow \n");
        exit(2);
    }
    return s.st[s.top];
}
​
// Function to print stack
void printStack(){
    if(!isEmptyStack(s)){
        for(int i=(s.top); i>=0; i--){
            printf("\n %d", (s.st[i]));
        }
    }
}
​
// Structure for Queue
struct Queue
{
    int que[MAX];
    int front, rear;
}q;
​
// Function to check if Queue is full
int isFullQueue()
{
    if (q.rear == (MAX - 1))
    {
        return 1;
    }
    return 0;
}
​
// Function to check if Queue is empty
int isEmptyQueue()
{
    if (q.rear== -1)
    {
        return 1;
    }
    return 0;
}
​
// Function to enqueue
void enqueue(int data)
{
    if (isFullQueue())
    {
        printf("[!!] Overflow \n");
        exit(3);
    }
    if (isEmptyQueue())
    {
        q.front = q.rear = 0;
        q.que[(q.rear)] = data;
        return;
    }
    else
    {
        q.rear++;
        q.que[q.rear] = data;
        return;
    }
}
​
// Function to dequeue
int dequeue()
{
    if (isEmptyQueue())
    {
        printf("[!!] Underflow \n");
        exit(4);
    }
    else
    {
        int x;
        x = q.que[q.front];
        if(q.rear == q.front){
            q.rear=q.front=-1;
        }else{
        q.front++; }
        return x;
    }
}
​
// Function to return front element
int front_element()
{
    if(!isEmptyQueue()){
        printf("[!!] Underflow \n");
        exit(5);
    }
    return q.que[q.front];
}
​
// Function to print Queue
void print_queue()
{
    if (!isEmptyQueue())
    {
        for (int i = q.front; i <= q.rear; i++)
        {
            printf("%d ", q.que[i]);
        }
    }
    printf("\n");
}
​
// Initialising top, front and rear
void init(){
    q.front = q.rear = -1;
    s.top = -1;
}
​
// Function to reverse the Queue using iteration
void reverse_queue_iterative()
{
    while(!isEmptyQueue())
    {
        push(dequeue());
    }
    while(!isEmptyStack())
    {
        enqueue(pop());
    }
}
​
// Function to reverse the Queue using Recursion
void reverse_queue_recursion()
{
    if(isEmptyQueue())
    {
        return;
    }

    int x = dequeue();
    reverse_queue_recursion();
    enqueue(x);
​
}
​
// Driver Code
int main()
{
    init();
​
    int opt, element, dequeuedElement;
​
    while(opt != 0){
​
        printf(">> Which option do you want to choose? \n");
        printf(" 1. Enqueue \n 2. Dequeue \n 3. Reverse Iteratively \n 4. Reverse Recursively \n 5. Print Queue \n 0. Exit \n");
        scanf("%d", &opt);
​
        switch (opt)
        {
            case 1:
                printf(">> Enter the element you want to enqueue: \n");
                scanf("%d", &element);
                enqueue(element);
                break;
            case 2:
                dequeuedElement = dequeue();
                printf(">> The element dequeued is %d. \n", dequeuedElement);
                break;
            case 3:
                reverse_queue_iterative();
                break;
            case 4:
                reverse_queue_recursion();
                break;
            case 5:
                print_queue();
                break;
            case 0: 
                printf("[!!] Exiting \n");
                exit(0);
            default:
                printf("[!!] Invalid Input, Try Again \n");
                break;
        }
    }
​
    return 0;
}