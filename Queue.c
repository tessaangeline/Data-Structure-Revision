#include<stdio.h>
int s[100], front =-1, rear= -1, n, item, i;

void enqueue(item){
    if(rear == n-1){
        printf("Queue is Full");
    }
    else{
        rear=rear+1;
        s[rear]=item;
    }
}

void dequeue()
{
    if(front == rear){
        printf("Queue is Empty");
    }
    else{
        front=front+1;
        printf("Number is deleted!");
    }
}

void display()
{
    if(front == rear){
        printf("Queue is Empty");
    }
    else{
        printf("QUEUE: ");
        for(i=front+1;i<=rear;i++){
            printf("%d",s[i]);
        }
    }
}

int main()
{
    int ch;
    printf("\nEnter the max number of elements in the queue: ");
    scanf("%d", &n);
    printf("\nMENU \n1.Enqueue \n2.Dequeue \n3.Display \n4.Exit");
    do{
        printf("\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1:printf("Enter the number to be inserted: ");
                    scanf("%d",&item);
                    enqueue(item);
                    break;
            case 2: dequeue();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting...");
                    break;
            default: printf("Invalid choice");
        }
    }while(ch!=4);
}
