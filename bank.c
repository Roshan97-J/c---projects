#include<stdio.h>

//Prototype
float deposit();
void re(float balance);
float withdraw(float balance);
int main(){
  int choice=0;
  float balance=0.0f;
  do{
  printf("\n***************\n");
  printf("\nWELCOME TO BANK\n");
  printf("CHOOSE A OPTION\n");
  printf("\n1.Balance check\n");
  printf("2.Deposit money\n");
  printf("3.Withdraw\n");
  printf("4.EXIT!~\n");
  printf("Enter the option:");
  scanf("%d",&choice);
  switch (choice)
  {
  case 1:
    re(balance);
    break;
  case 2:
    balance +=deposit();
    break;
  case 3:
    balance -=withdraw(balance);
    break;
  case 4:
    printf("\nThank you for using bank\n");
    break;
  default:
    printf("Invalid option choose bt 1-4 :>\n");
  }

  }while(choice!=4);
  return 0;
}void re(float balance){
printf("\nThe Total Balance is %.2f$\n",balance);
}float deposit(){
  float deposit=0.0f;
  printf("Enter the kaasu to deposit:");
  scanf("%f",&deposit);
  if (deposit<0){
    printf("Invalid kaasu\n");
    return 0.0f;
  }else {
    printf("The deposit kasu is $:%.2f\n",deposit);
    printf("YOU KAASU SUCCESSFULLY DEPOSITED\n");
    return deposit;//important

  }
  return 0.0f;
}
float withdraw(float balance){
  float kaasu=0.0f;
  printf("\nEnter the kaasu to withdraw:");
  scanf("%f",&kaasu);

  if (kaasu<0){
    printf("Enter the valid number\n");
    return 0.0f;
  }else if (kaasu>balance){
    printf("Account la kaasu Illa\n");
}else{
    printf("YOUR KAASU SUCCESSFULLY WITHDREW :$%.2f",kaasu);
    return kaasu;
  }
}
