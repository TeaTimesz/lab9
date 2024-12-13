#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

int main(){	
	double loan , interest , paid;
	cout << "Enter initial loan: ";
	cin >> loan;
	cout << "Enter interest rate per year (%): ";
	cin >> interest;
	cout << "Enter amount you can pay per year: ";
	cin >> paid;
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	cout << fixed << setprecision(2);

	for(int i = 1;i > 0;i++){
			cout << setw(13) << left << i; 
			cout << setw(13) << left << loan;
			cout << setw(13) << left << loan * (interest / 100);
			cout << setw(13) << left << loan + (loan * (interest / 100));
			if((loan + (loan * (interest / 100))) - paid <= 0){
				cout << setw(13) << left << loan + (loan * (interest / 100));		
				cout << setw(13) << left << 0.00;
				cout << "\n";
				break;
			}
			cout << setw(13) << left << paid;		
			cout << setw(13) << left << (loan + (loan * (interest / 100))) - paid;
			cout << "\n";	
			loan = (loan + (loan * (interest / 100))) - paid;
	}
}