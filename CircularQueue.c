#include<stdio.h>
int Q[100],n,i,rear=-1, front=-1;

void insert(int item){
    if(front == (rear+1) % n){
        printf("Queue is full");
    }
    else{
        rear = (rear+1) % n;
        Q[rear]=item;
        if(front == -1){
            front=rear;
        }
    }
}

void delete()
{
    if(front== -1){
        printf("is empty");
    }
    else{
        if(front == rear){
            front=rear=-1;
        }
        else{
            front=front+1%n;
        }
    }
}

void display(){
    if(front==-1){
        printf("is empty");
    }
    else{
            i=front;
            do{
            printf("%d",Q[i]);
            i=(i+1)%n;
        }while(i != (rear +1)%n);
    }
}

int main()
{
    int ch,item;
    printf("Enter the max number of elements in the queue: ");
    scanf("%d",&n);
    printf("\nMENU \n1.Insert \n2.Delete \n3.Display \n4.Exit");
    do{
        printf("\nEnter the choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("\nEnter the number to be inserted: ");
                    scanf("%d",&item);
                    insert(item);
                    break;
            case 2: printf("\nDeleted the number");
                    delete();
                    break;
            case 3:display();
                    break;
            case 4:printf("Exiting...!");
                    break;
            default: printf("Invalid choice!");
            
        }
    }while(ch!=4);
}
