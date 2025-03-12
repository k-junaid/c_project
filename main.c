// Medical Store Management System Application!
//Attributes:Medicine ID,Name,Category,Price,Quantity

#include<stdio.h>



struct Medicine{
    int medID;
    char name[100];
    char category[50];
    float price;
    int quantity;
};
struct Medicine m1;

void acceptInput(){
    //UI logic: accepting input from user
    printf("Enter Medicine ID:");
    scanf("%d",&m1.medID);
    printf("Enter Medicine Name:");
    scanf("%s",m1.name);
    printf("Enter Medicine Category:");
    scanf("%s",m1.category);
    printf("Enter Medicine Price:");
    scanf("%f",&m1.price);
    printf("Enter Medicine Quantity:\n");
    scanf("%d",&m1.quantity);

}


void displayOutput(){
    //UI Logic: Displaying output to user
    printf("medId:%d\n",m1.medID);
    printf("name:%s\n",m1.name);
    printf("category:%s\n",m1.category);
    printf("price:%f\n",m1.price);
    printf("quantity:%d\n",m1.quantity);
}


int main(){
   

    acceptInput();
    displayOutput();
    return 0;
    
}