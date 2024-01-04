#include<stdio.h>
int s[100],top=-1,n,i;

void 
push(int item){
    if(top == n-1){
        printf("Stack is full");
    }    
    else{
        top++;
        s[top]=item;
    }
}

void pop()
{
    if(top == -1){
        printf("Stack is Empty");
    }
    else{
        top--;
        printf("Number has been deleted");
    }
}

void display(){
    if(top == -1){
        printf("Stack is empty");
    }
    else{
        printf("Stack: ");
        for(i=0;i<n;i++){
            printf("%d\t",s[i]);
        }
    }
}

int main(){
    int ch, item;
    printf("\nEnter the max size of the stack: ");
    scanf("%d",&n);
    printf("\nMENU \n1.push \n2.pop \n3.display \n4.exit");
    do{
        printf("\nEnter your choice: ");
        scanf("%d",&ch);
        switch(ch){
            case 1: printf("Enter the number to be inserted");
                    scanf("%d",&item);
                    push(item);
                    break;
            case 2: pop();
                    break;
            case 3: display();
                    break;
            case 4: printf("Exiting...");
                    break;
            default: printf("Invalid choice!");
        }
    }while(ch!=4);
}
