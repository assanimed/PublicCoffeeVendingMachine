#include <stdio.h>
#include <stdbool.h>

void command(){
  printf("1.Add money. \n");
  printf("2.retrieve your money. \n");
  printf("3.pass your order. \n");
}

void hr(){
  printf("\n-----------------------\n");
}

void coffeeCommand(){
  printf("1. Americano\n");
  printf("2. Espresso\n");
  printf("3. Mocha\n");
  printf("4. Capuccino\n");
  hr();
}



int main(void) {
  int choix, balance = 0,amount, coffeeCode;
  const int Uniteprice = 5;


  printf("----------Welcome---------- \n\n");

  for(;;){
    printf("\n--> Balance: %d  \n\n", balance);
    
    

      command();
      printf("\n your operation: ");
      scanf("%d", &choix);
    

    if(choix == 1){
      printf("Enter the amount: ");
      scanf("%d", &amount);
      balance += amount;
    }
    
    if(choix == 2){
      if(balance > 0){
        printf("Money retreived. %d DH\n", balance);
        balance = 0; 
      } else {
        hr();
        printf("there's no money to retrieve!!!");
        hr();
      }
    }
    if(choix == 3){
      if(balance>=Uniteprice){
        printf("-----Coffee List-----\n\n");
        coffeeCommand();
        printf("Choose your coffee: ");
        scanf("%d", &coffeeCode);

        if(coffeeCode == 1){
          balance -= Uniteprice;
          hr();
          if(balance>0){
            printf("Money retreived. %d DH\n\n", balance);
            balance = 0;
          } 
          printf("Americano Selected.\nPlease  wait...!\nEnjoy!\n");
          hr();
        } else if(coffeeCode == 2){
            balance -= Uniteprice;
            hr();
            if(balance>0){
              printf("Money retreived. %d DH\n\n",  balance);
              balance = 0;
            }
            printf("Espresso Selected.\nPlease  wait...!\nEnjoy!\n");
            hr();
          }else if(coffeeCode == 3){
            balance -= Uniteprice;
            hr();
            if(balance>0){
              printf("Money retreived. %d DH\n\n",  balance);
              balance = 0;
            }
            printf("Mocha Selected.\nPlease   wait...!\nEnjoy!\n");
            hr();
          } else if(coffeeCode == 4) {
            balance -= Uniteprice;
            hr();
            if(balance>0){
              printf("Money retreived. %d DH\n\n",  balance);
              balance = 0;
            }
            printf("Capuccino Selected.\nPlease   wait...!\nEnjoy!\n");
            hr();
          }


      } else {
        hr();
        printf("Insufficient amount!!!");
        hr();
      }
    }
  }




  return 0;
}