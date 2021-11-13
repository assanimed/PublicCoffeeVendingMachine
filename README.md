# CoffeeMachine

## var<br>
  count,choix = 0, balance:=0,amount,coffeeCode : entier

## const
  unitePrice = 5 : entier

## debut

ecrire("-----Welcome-----")

### `Pour count de 0 a 0 pas 0`

  <pre>
    ecrire("1.Add money.");
    ecrire("2.retrieve your money.");
    ecrire("3.pass your order. ");
  
    erire("your operation: ")
    lire(choix)<br>

    Si choix == 1 alors
      ecrire("Enter the amount: ")
      lire(amount)
      balance = balance + amount
    FinSi
    
    Si choix == 2 et balance > 0 alors
      Si balance > 0 alors
        ecrire("Money retreived ", balance, " DH")
        balance = 0
      Sinon
        ecrire("there's no money to retrieve!!") 
      FinSi
    FinSi

    Si choix ==3 alors
      Si balance >= 5 alors
        ecrire("-----Coffee List-----")

        ecrire("1. Americano")
        ecrire("2. Espresso")
        ecrire("3. Mocha")
        ecrire("4. Capuccino")
        
        ecrire("Choose your coffee: ")
        live(coffeeCode)

        Si coffeeCode == 1  alors

          balance = balance - Uniteprice;
          if(balance>0){
            ecrire("Money retreived ", balance, " DH")
            balance = 0
          } 
          ecrire("Americano Selected.")
          ecrire("Please  wait...!")
          ecrire("Enjoy!")
          
        SinonSi coffeeCode == 2 alors

          balance = balance - Uniteprice;
          if(balance>0){
            ecrire("Money retreived ", balance, " DH")
            balance = 0
          } 
          ecrire("Espresso Selected.")
          ecrire("Please  wait...!")
          ecrire("Enjoy!")

        SinonSi coffeeCode == 3 alors

          balance = balance - Uniteprice;
          if(balance>0){
            ecrire("Money retreived ", balance, " DH")
            balance = 0
          } 
          ecrire("Mocha Selected.")
          ecrire("Please  wait...!")
          ecrire("Enjoy!")

        SinonSi coffeeCode == 4 alors
          balance = balance - Uniteprice;
          if(balance>0){
            ecrire("Money retreived ", balance, " DH")
            balance = 0
          } 
          ecrire("Capuccino Selected.")
          ecrire("Please  wait...!")
          ecrire("Enjoy!")
        FinSi


      Sinon
        ecrire("insufficient amount")
      FinSi
  
    FinSi
  </pre>


### `finPour`

## Fin

