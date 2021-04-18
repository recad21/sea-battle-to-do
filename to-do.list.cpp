#include <iostream>
#include <clocale>
#include <cstdio>
#include <stdio.h>
#include <windows.h>
using namespace std;


void start(){
	cout << "\t\t\t" << endl;
	cout << "    ________     ____                 _____        ____           ___      ___________    ________    ________      " << endl;
	cout << "   |__    __|   /    \\               |  __  \\     /    \\         |  |      |___    ___|  |   _____|  |__    __|     " << endl;
	cout << "      |  |     /  /\\  \\     ____     | |   \\ \\   /  /\\  \\        |  |          |  |      |  |_____      |  |        " << endl;
	cout << "      |  |    |  |  |  |   |____|    | |   | |  |  |  |  |       |  |          |  |      |_____   |     |  |        " << endl;
	cout << "      |  |     \\  \\/  /              | |__/  /   \\  \\/  /        |  |____   ___|  |___    _____|  |     |  |        " << endl;
	cout << "      |__|      \\____/               |_____/      \\____/         |_______| |__________|  |________|     |__|        " << endl;
	cout << "\t\t\t" << endl;

}
struct Do
{
	char* name[50];
	char* opis[50];
	int prior;
	int day;
	int month;
	int week;
};

Do* massDo = nullptr;
Do* newMass = nullptr;
int men = 0;
 
int menu() {
	cout << "What you want to do?" << endl;
	cout << "1. Add deal\n2. Edit deal\n3. Delete deal\n4. Display deal\n5. Search deal\n6. Exit" << endl;
	cin >> men;
	return men;
}

void create(int N) {
	massDo = new Do;
	for (int i = 0; i < N; i++) {
		cout << "Enter name deal number " << i + 1 << ":\t";
		cin >> *massDo[i].name;
		cout << "Enter description deal number " << i + 1 << ":\t";
		cin >> *massDo[i].opis;
		cout << "Enter priority deal (1-5) number " << i + 1 << ":\t";
		cin >> massDo[i].prior;
		cout << "Enter day deal number " << i + 1 << ":\t";
		cin >> massDo[i].day;
		cout << "Enter month deal number " << i + 1 << ":\t";
		cin >> massDo[i].month;
		cout << "Enter week deal number " << i + 1 << ":\t";
		cin >> massDo[i].week;
	}
}

void showDay(int N, int day) {
	for (int i = 0; i < N; i++) {
		if (day == massDo[i].day) {
			cout << "Day deal number " << (i + 1) << ": " << massDo[i].day << endl;
		}
	}
}
void showMonth(int N, int month) {
	for (int i = 0; i < N; i++) {
		if (month == massDo[i].month) {
			cout << "Month deal number " << (i + 1) << ": " << massDo[i].month << endl;
		}
	}
}
void showWeek(int N, int week) {
	for (int i = 0; i < N; i++) {
		if (week == massDo[i].week) {
			cout << "Week deal number " << (i + 1) << ": " << massDo[i].week << endl;
		}
	}
}

void search(int N, int s) {
	char des[50];
	char name[50];
	int pr;
	switch (s) {
	case 1:
		cout << "Enter name:" << endl;
		cin >> name;
		for (int i = 0; i < N; i++) {
			if (name == massDo[i].name[50]) {
				cout << "Name deal number " << (i + 1) << ": " << massDo[i].name << endl;
			}
			else {
				cout << "No deal for this name";
			}
		}
		break;
	case 2:
		cout << "Enter priority:" << endl;
		cin >> pr;
		for (int i = 0; i < N; i++) {
			if (&pr == &massDo[i].prior) {
				cout << "Priority deal number " << (i + 1) << ": " << massDo[i].prior << endl;
			}
			else {
				cout << "No deal for this priority";
			}
		}
		break;
	case 3:
		cout << "Enter descriprion:" << endl;
		cin >> des;
		for (int i = 0; i < N; i++) {
			if (des == massDo[i].opis[50]) {
				cout << "Description deal number " << (i + 1) << ": " << massDo[i].opis << endl;
			}
			else {
				cout << "No deal for this descroption";
			}
		}
		break;
	}
}

void changeName(char* newName, int N) {
	int num;
	cin >> num;
	*newMass[num].name = newName;
}
void changeOpis(char* newOpis, int N) {
	int num;
	cin >> num;
	*newMass[num].opis = newOpis;
}
void changePrior(int newPrior, int N) {
	int pr;
	do {
		cin >> pr;
		if (pr < 0 || pr >= N)
		cout << "Invalid num. Reenter: ";
	} while (pr < 0 || pr >= N);
	massDo[pr].prior = newPrior;
}
void changeDay(int newDay, int N) {
	int day;
	do {
		cin >> day;
		if (day < 0 || day >= N)
		cout << "Invalid day. Reenter: ";
	} while (day < 0 || day >= N);
	massDo[day].day = newDay;
}
void changeMonth(int newMonth, int N) {
	int month;
	do {
		cin >> month;
		if (month < 0 || month >= N)
		cout << "Invalid month. Reenter: ";
	} while (month < 0 || month >= N);
	massDo[month].month = newMonth;
}
void changeWeek(int newWeek, int N) {
	int week;
	do {
		cin >> week;
		if (week < 0 || week >= N)
		cout << "Invalid num. Reenter: ";
	} while (week < 0 || week >= N);
	massDo[week].week = newWeek;
}


void delDo(int N) {
	int toDel;
	cout << "Enter num deal to delete: ";
	do {
		cin >> toDel;
		if (toDel < 0 || toDel >= N) {
			cout << "ReEnter num: ";
		}
	} while (toDel < 0 || toDel >= N);
	Do* newMass = new Do[N - 1];
	for (int i = 0; i < toDel; i++) {
		newMass[i].prior = massDo[i].prior;
		newMass[i].day = massDo[i].day;
		newMass[i].month = massDo[i].month;
		newMass[i].week = massDo[i].week;
	}
	for (int i = toDel + 1; i < N; i++) {
		newMass[i - 1].prior = massDo[i].prior;
		newMass[i - 1].day = massDo[i].day;
		newMass[i - 1].month = massDo[i].month;
		newMass[i - 1].week = massDo[i].week;
	}
	delete massDo;
	massDo = newMass;
	newMass = nullptr;
}

int main() {
	char name1[50], opis[50];
	int pri, d, m, w;
	int N, ch, day, month, week, sh;
	
	int s, pr;
	start();
	cout << "Enter num deal: \t";
	cin >> N;
	if (!cin) {
		cin.clear();
		cin.ignore(7, '\n');
		cin >> N;
	}
	char name[50];
	//menu();
	do {
		switch (men) {
		case 1:
			create(N);
			menu();
			break;
		case 2:
			cout << "What you want change? \n1)Name\n2)Description\n3)Priority\n4)Day\n5)Month\n6)Week" << endl;
			cin >> ch;
			if (!cin) {
				cin.clear();
				cin.ignore(7, '\n');
				cin >> ch;
			}
			if (ch == 1) {
				cout << "Enter new name: " << endl;
				cin >> name1;
				changeName(name1, N);
			}
			if (ch == 2) {
				cout << "Enter new description: " << endl;
				cin >> opis;
				changeOpis(opis, N);
			}
			if (ch == 3) {
				cout << "Enter new priority: " << endl;
				cin >> pri;
				changePrior(pri, N);
			}
			if (ch == 4) {
				cout << "Enter new day: " << endl;
				cin >> d;
				changeDay(d, N);
			}
			if (ch == 5) {
				cout << "Enter new month: " << endl;
				cin >> m;
				changeMonth(m, N);
			}
			if (ch == 6) {
				cout << "Enter new week: " << endl;
				cin >> w;
				changeWeek(w, N);
			}
			menu();
			break;
		case 3:
			delDo(N);
			menu();
			break;
		case 4:
			cout << "Choose \n1)Day\n2)Month\n3)Week: " << endl;
			cin >> sh;
			if (sh == 1) {
				cout << "Enter day:" << endl;
				cin >> day;
				showDay(N, day);
			}
			else if (sh == 2) {
				cout << "Enter month:" << endl;
				cin >> month;
				showMonth(N, month);
			}
			else if (sh == 3) {
				cout << "Enter week:" << endl;
				cin >> week;
				showWeek(N, week);
			}
			menu();
			break;
		case 5:
			
			cout << "What do you want to find?\n1)Name\n2)Priority\n3)Description" << endl;
			cin >> s;
			//search(N, s);
			menu();
			break;
		case 6:
			break;
		default:
			menu();
			break;
		}
	} while (men != 5);
}