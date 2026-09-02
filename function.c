#include <stdio.h>
#include <string.h>
#include<stdbool.h>
/*void Love(char name[]){
  printf("my name is Mariya Jamila Rani");
}void replay(char chat[]){
  printf("I want to tell something");
}void replay2(char name[]){
  printf("I LOVE YOU %s",name);
}
int main(){
  char name[10]="";
  char chat[10]="";
  char repl[10]="";
  printf("Enter your name:");
  fgets(name,sizeof(name),stdin);
  name[strlen(name)-1]='\0'; // to clear input buffer
  Love(name);
  printf("\nTyping:");
  fgets(chat,sizeof(chat),stdin);
  chat[strlen(chat)-1]='\0'; // to clear input buffer
  replay(chat);
  printf("\n--->");
  fgets(repl,sizeof(repl),stdin);
  repl[strlen(repl)-1]='\0';
  replay2(name);

  //RETURN TYPE Example this one for can use add sub mul divid
  double Cube(double num){
    return num*num*num;
  }
  int main(){
    double x=Cube(3.33);
    double y=Cube(4.44);
    double z=Cube(5.45);
    printf("%.2lf\n",x);
    printf("%.2lf\n",y);
    printf("%.2lf\n",z);
}

bool AppPercheck(int num){
  if(num>18){
    return true;
  }else{
  return false;
}
}
int main(){
  int age=19;
  if(AppPercheck(age)){
    printf("You Can Be MY Wife my Dear Anbeeee!!!!!\n");
  }else{
    printf("You are not my Wife\n");
}

}
//variable scope=can be used anywhere and it has global and local variable scope.
//same variable name can use many time

int cal=0;// global scope can declare one and use any where in code
// global scope is danger to use more often

int divide(int x,int y){
  cal=67;//declare int on global scope in line 6!!!!!!
  printf("%d\n",cal);
  int result=x/y;//Local scope
  return result;
}

int multiple(int x, int y){
  cal=69;//declare int on global scope in line 6!!!!!!
  printf("%d\n",cal);// Global scope
  int result=x*y;//Local scope
  return result;
}

int main(){

  int result=divide(6,3);// calling the function
  printf("%d\n",result);
  return 0;
}

//Funtion prototype == enable type before it creates

int Agecheck(int birth, int currentyear); //Funtion prototype

int main(){
  int birth;
  int currentyear;
  scanf("%d",&birth);//input
  scanf("%d",&currentyear);
  int age=Agecheck(birth,currentyear);
  printf("%d\n",age);
}
int Agecheck(int birth,int currentyear){
  int age = currentyear-birth;
  return age;
}
//while loop
int main(){
  char name[10]="";
  printf("Enter your name:");
  fgets(name, 10,stdin);
  name[strlen(name)-1]='\0';

  while(1){
    printf("%s",name);
    break;
  }
}

//for loop
int main(){
 // for (int i;i<10;i++){
   /// printf("%d\n",i);//\n new line if _____ empty space then on vertical line
 // }
//}
//create a 5x5 table
for (int i=1;i<6;i++){
  for(int j=1;j<6;j++){
    printf("%4d ",i*j);//4d for 4 space
  }printf("\n");
  }
}*/
int main(){
  char sym='\0';
  int rows;
  int col;
  printf("Enter Symbol:");
  scanf(" %c",&sym);
  printf("ENTER VAL to rows:");
  scanf(" %d",&rows);
  printf("ENTER VAL to col:");
  scanf("%d",&col);

  for (int i=0;i < rows;i++){
    for (int i=0;i<col;i++){
      printf(" %c",sym);
    }printf("\n");
    }
}
