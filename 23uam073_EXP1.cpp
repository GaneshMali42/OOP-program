#include <iostream>
using namespace std;

struct Transaction {
    int amount;  
    int balance;  
};

void printPassbook(Transaction transactions[],int count) {
    cout<<"\nPassbook Entries:\n";
    cout<<"---------------------------------------------\n";
    cout<<"|   No.  |   Amount      |   Balance         |\n";
    cout<<"---------------------------------------------\n";
    for(int i=0;i<count;i++){
        cout <<"|   " << i + 1 << "   |   " 
             <<transactions[i].amount << "          |   " 
             << transactions[i].balance << "         |\n";
    }
    cout<<"---------------------------------------------\n";
}

int main(){
    int balance=0,choice,amount,transactionCount=0;
    Transaction transactions[100]; 

    while (1){
        cout<<"\n1.Deposit Cash";
        cout<<"\n2.Withdraw Cash";
        cout<<"\n3. Print Passbook";
        cout<<"\n4. Check Balance";  
        cout<<"\n5. Exit";
        cout<<"\nEnter your choice: ";
        cin>>choice;
        switch(choice) {
            case 1:  
                cout<<"Enter the amount to deposit: ";
                cin>>amount;
                if(amount>0){
                    balance+=amount;
                    transactions[transactionCount].amount=amount; 
                    transactions[transactionCount].balance=balance;
                    transactionCount++;
                    cout<<"Amount deposited successfully. Current balance:"<<balance<<"\n";
                } 
                else {
                    cout<<"Invalid amount.\n";
                }
                break;

            case 2:  
                cout<<"Enter the amount to withdraw: ";
                cin>>amount;
                if(amount>0&&amount<=balance){
                    balance-=amount;
                    transactions[transactionCount].amount=-amount; 
                    transactions[transactionCount].balance=balance;
                    transactionCount++;
                    cout<<"Amount withdrawn successfully Current balance:"<<balance<<"\n";
                } 
                else if(amount>balance){
                    cout<<"Insufficient balance";
                } 
                else{
                    cout<<"Invalid amount\n";
                }
                break;

            case 3: 
                if(transactionCount==0){
                    cout<<"No transactions available to display.\n";
                } 
                else {
                    printPassbook(transactions,transactionCount);
                }
                break;

            case 4:  
                cout<<"Current balance: " << balance << "\n";
                break;

            case 5:  
                cout<< "Exiting program\n";
                return 0;

            default:
                cout << "Invalid choice.\n";
        }
    }

    return 0;
}

