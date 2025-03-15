#include <iostream>
using namespace std;

void zadaniaPowtorkowe1() {
    char podpunkt;
    cout << "Podaj podpunkt do wykonania: \n"
        << "a) 01234567890123456789...gdzie cyfr jest n\n"
        << "b) 0101010101...gdzie cyfr jest n\n"
        << "c) 012301230123...gdzie cyfr jest n\n"
        << "d) 012301230123...0123 gdzie trojek jest n\n"
        << "e) 0123456789012345678901234... 3 gdzie trojek jest n\n"
        << "f) 3737373737...gdzie cyfr jest n\n";
    cin >> podpunkt;
    int n;
    switch (podpunkt) {
    case 'a':
        cout << "Zadanie 1a\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << (i % 10);
        }
        break;

    case 'b':
        cout << "Zadanie 1b\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << (i % 2);
        }
        break;

    case 'c':
        cout << "Zadanie 1c\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            cout << (i % 4);
        }
        break;

    case 'd':
        cout << "Zadanie 1d\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < 4; j++) {
                cout << j;
            }
        }
        break;

    case 'e':
        cout << "Zadanie 1e\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n - 1; i++) {
            for (int j = 0; j < 10; j++) {
                cout << j;
            }
        }
        cout << "0123";
        break;

    case 'f':
        cout << "Zadanie 1f\n";
        cout << "Podaj liczbe n: ";
        cin >> n;
        for (int i = 0; i < n; i++) {
            if (i % 2 == 0)
                cout << 3;
            else
                cout << 7;
        }
        break;
    }
}

void zadaniaPowtorkowe2() {
    cout << "Podaj podpunkt: \n"
        << "a), b), c), d), e), f), g)\n";
    char podpunkt;
    cin >> podpunkt;
    int n;
    switch (podpunkt) {
        case 'a': {
            cout << "Podaj n: \n";
            cin >> n;
            int temp = n;
            while (temp > 0) {
                for (int i = n; i > 0; i--) {
                    cout << i;
                }
                cout << '\n';
                temp--;
            }
            break;
        }

        case 'b': {
            cout << "Podaj n: \n";
            cin >> n;
            int temp1 = 1;
            while (temp1 <= n) {
                for (int i = 1; i <= temp1; i++) {
                    cout << i;
                }
                cout << '\n';
                temp1++;
            }
            break;
        }

        case 'c': {
            cout << "Podaj n: ";
            cin >> n;
            int num = 0;
            for (int i = 0; i < n; i++) {
                if (i % 2 == 0)
                    num = 3;
                else
					num = 7;
                for (int j = 0; j <= i; j++) {
                    cout << num;
                }
                cout << '\n';
            }
            break;
        }

        case 'd': {
            cout << "Podaj n: ";
			cin >> n;
            for (int i = n; i > 0; i--) {
                for (int j = i; j > 0; j--) {
                    cout << j;
                }
				cout << '\n';
            }
			break;
        }

        case 'e': {
			cout << "Podaj n: ";
			cin >> n;
            for (int i = 1; i <= n; i++) {
                for (int j = i; j <= n; j++) {
                    cout << j;
                }
                cout << '\n';
            }
            break;
        }

        case 'f': {
            cout << "Podaj n: ";
            cin >> n;
            for (int i = 1; i <= n; i++) {
                for (int j = 1; j <= n; j++) {
                    if (j <= n - i)
                        cout << " ";
                    else
                        cout << j;
                }
				cout << '\n';
            }
			break;
        }

        case 'g': {
			cout << "Podaj n: ";
            cin >> n;
            for (int i = 0; i <= n; i++) {
                for (int j = n; j >= 1; j--) {
                    if (j <= n - i)
                        cout << j;
                    else
                        cout << " ";
                }
                cout << '\n';
            }
            break;
        }
    }
}

int main()
{
    int numerZadania;
    cout << "Podaj numer zadania: \n"
        << "1. Zadania powtorkowe 1\n"
        << "2. Zadania powtorkowe 2\n";
    cin >> numerZadania;
    switch (numerZadania)
    {
        case 1:
            zadaniaPowtorkowe1();
            break;

        case 2:
            zadaniaPowtorkowe2();
            break;

        default:
            break;
    }
    return 0;
}
