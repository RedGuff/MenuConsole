#include <iostream>

using namespace std;

void intro() {
    cout << "Bonjour." << endl;
    cout << "0 : Sortir." << endl;
    cout << "1 : Choix 1." << endl;
    cout << "2 : Choix 2." << endl;
    cout << "3 : Choix 3." << endl;
    cout << "4 : Choix 4." << endl;
    cout << "5 : Choix 5." << endl;
    }

void outtro() {
    cout << "Au revoir." << endl;
    }

void Choice1() {
    cout << "Vous avez fait le choix 1." << endl;
    }
void Choice2() {
    cout << "Vous avez fait le choix 2." << endl;
    }
void Choice3() {
    cout << "Vous avez fait le choix 3." << endl;
    }
void Choice4() {
    cout << "Vous avez fait le choix 4." << endl;
    }
void Choice5() {
    cout << "Vous avez fait le choix 5." << endl;
    }

int main() {
    char choice='?';

    do {
        intro();
        cin >> choice;

        switch ( choice ) {
            case '1':
                Choice1();
                break;

            case '2':
                Choice2();
                break;

            case '3':
                Choice3();
                break;

            case '4':
                Choice4();
                break;

            case '5':
                Choice5();
                break;

            case '0':
                break;

            default:
                cerr << "Quoi ?" << endl;
                break;
            }
        }
    while ( choice != '0' );

    outtro();
    return 0;
    }
