#include <iostream>



class Account {
   float balance;                                
   std::string iban;
   std::string accountNum;
   std::string nameSurname;
   std::string citizenId;
   std::string birthDate;
   std::string phoneNum;
   std::string accType;
   float incomeInfo;

   public:



   Account(float balance = 0,std::string iban, std::string accountNum, std::string nameSurname, 
           std::string citizenId, std::string birthDate, std::string phoneNum, float incomeInfo, std::string accType){
      // this = class'ın kendine ait pointerı. class ın ögelerine erişmek için this pointerı kullanılır.
      this->balance = balance;
      this->iban = iban;
      this->accountNum = accountNum;
      this->nameSurname = nameSurname;
      this->citizenId = citizenId;
      this->birthDate = birthDate;
      this->phoneNum = phoneNum;
      this->incomeInfo = incomeInfo;
      this->accType = accType;
   }
   float getBalance(){
      return this->balance;
   }
   std::string getiban(){
      return this->iban;
   }
   std::string getaccountNum(){
      return this->accountNum;
   }
   std::string getnameSurname(){
      return this->nameSurname;
   }
   std::string getcitizenId(){
      return this->citizenId;
   }
   std::string getbirthDate(){
      return this->birthDate;
   }
   std::string getphoneNum(){
      return this->phoneNum;
   }
   std::string getaccType(){
      return this->accType;
   }
   float getincomeInfo(){
      return this->incomeInfo;
   }
   
   // Fonksiyonun oluşturulma şeması
   template <typename atr>
    void setAtr (std::string atrName,atr value){
      if (atrName == "balance"){
         this->balance = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else if (atrName == "nameSurname"){
         this->nameSurname = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else if (atrName == "birthDate"){
         this->birthDate = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else if (atrName == "phoneNum"){
         this->phoneNum = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else if (atrName == "incomeInfo"){
         this->incomeInfo = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else if (atrName == "accType"){
         this->accType = value;
         std::cout << "Attribute set successfully" << std::endl;
      }
      else {
         std::cout << "Given attribute cannot be changed or does not exist!" << std::endl;
      } 
      

   /*
   Fonksiyonun kullanımı
   setAtr<float>('balance',45.0)
   setAtr<std::string>('phoneNum','05011011729')
   */
   
}
};
void createAccount(){
   std::string nameSurname = std::string("ata");
   int citizenId;
   int phoneNum;
   std::string jobName;
   int incomeInfo;
   int day;
   int month;
   int year;
   std::string homeAddress;

   std::cout << "Please enter your name and surname:" << std::endl;
   std::cin >> nameSurname;


   std::cout << "Please enter your citizen id or passport id:" << std::endl;
   std::cin >> citizenId;


   std::cout << "Please enter your phone number:" << std::endl;
   std::cin >> phoneNum;
 

   std::cout << "Please enter your job name:" << std::endl;
   std::cin >> jobName;


   std::cout << "Please enter your income:" << std::endl;
   std::cin >> incomeInfo;

   std::cout << "Please enter your homeAddress:" << std::endl;
   std::cin >> homeAddress;
}

void createInvestAccount(){

}


void deleteAccount(){

}

void callAi(){

}

void withdrawMoney(){
   int myMoney= 5000;
   int withdrawMoney;
   bool isDone = false;
   
   while (!isDone){
      std::cout << "How much money are you going to withdraw?" << std::endl;
      std::cin >> withdrawMoney;
      if((withdrawMoney < myMoney) && (withdrawMoney > 0)){
       
         myMoney = myMoney - withdrawMoney;
         //myMoney -= withdrawMoney;
         std::cout << "Your final balance is:" << myMoney << std::endl;
         isDone = true;
      }
      else {
         std::cout << "You entered an invalid number, please try again." << std::endl;
      }
   }
}

void depositMoney(){
   int myMoney= 5000;
   int depositMoney;
   int isDone = false;
   std::cout << "How much money are you going to deposit?" << std::endl;
   std::cin >> depositMoney;

   while(!isDone){
      if(depositMoney > 0){
         myMoney += depositMoney;
         std::cout << "Your final balance is:" << myMoney << std::endl;
         isDone = true;
      }
      else{
         std::cout << "You entered an invalid number, please try again." << std::endl;
      }
   }
}

void transferMoney(){

}

void createFund(){

}

/*
Account said = Account();
said->balance               (burası ileride yeniden anlatacak)
said->nameSurname

int balance = Account->getBalance()

balance += depositMoney;
Account->setBalance(balance); 



*/