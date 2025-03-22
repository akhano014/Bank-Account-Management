#include<iostream>
using namespace std;
class BankAccount {
private:
	string accountName;
	double balance;
	static int intrest_rate;
public:
	BankAccount();
	BankAccount(string name, double money);
	~BankAccount();
	double depositamount(double money);
	double withdrawamount(double money);
	static int countaccounts();
	double displaybalance();

};
int BankAccount::intrest_rate = 0;
BankAccount::BankAccount() :accountName("lora"), balance(0) {
	intrest_rate++;
}
BankAccount::BankAccount(string name, double money) {
	accountName = name;
	balance = money;
	intrest_rate++;
}
BankAccount::~BankAccount() {
	cout << "I am a destructor" << endl;
}
double BankAccount::depositamount(double depmoney) {
	balance += depmoney  ;
	return balance;
}
double BankAccount::withdrawamount(double witmoney) {
	 
	if (balance > 0) {
		balance-=witmoney;
	}
	else {
		cout << "Enter valid amount" << endl;
	}
	return balance;
}
int BankAccount::countaccounts() {
	return intrest_rate;
}
double BankAccount::displaybalance(){
	
	return balance;
}
int main() {
	string na;
	double ba;
	cout << "Enter your name: " << endl;
	cin >> na;
	cout << "Enter your initial balance: " << endl;
	cin >> ba;
	BankAccount house(na, ba);
	double depositmoney;
	cout << "Enter the deposit amount: " << endl;
	cin >> depositmoney;
	house.depositamount(depositmoney);
	double withdrawmoney;
	cout << "Enter withdraw amount: " << endl;
	cin >> withdrawmoney;
	house.withdrawamount(withdrawmoney);
	cout << "Enter your name: " << endl;
	cin >> na;
	cout << "Enter your initial balance: " << endl;
	cin >> ba;
	BankAccount office(na, ba);
	cout << "Enter the deposit amount: " << endl;
	cin >> depositmoney;
	office.depositamount(depositmoney);
	cout << "Enter withdraw amount: " << endl;
	cin >> withdrawmoney;
	office.withdrawamount(withdrawmoney);
	cout << "Total balance of House account: " << house.displaybalance() << endl;
	cout << "Total balance of office account: " << office.displaybalance() << endl;
	cout << "Total intrest rate: " << BankAccount::countaccounts() << endl;
}