#include <iostream>
using namespace std;

void task1() {
    int N;

    cout << "Enter size of array: ";
    cin >> N;

    int A[1000], B[1000];
    int j = 0;

    cout << "Enter elements of array A:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < N; i++) {
        if (A[i] > 10) {
            B[j] = A[i];
            j++;
        }
    }

    cout << "Array B (elements > 10): ";
    for (int i = 0; i < j; i++) {
        cout << B[i] << " ";
    }
    cout << endl;
}

void task2() {
    int N;
    cout << "Enter size of array: ";
    cin >> N;

    int A[1000];

    cout << "Enter elements:" << endl;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    int T1, T2;
    cout << "Enter T1 and T2: ";
    cin >> T1 >> T2;

    int* p = A;

    int min = 1000000;
    int index = -1;

    for (int i = 0; i < N; i++, p++) {

        if (*p > T2)
            break;

        if (*p < T1) {
            if (*p <= min) {
                min = *p;
                index = i;
            }
        }
    }

    if (index != -1)
        cout << "Last minimal element index: " << index << endl;
    else
        cout << "Element not found" << endl;
}

void task3() {
    int n, m;

    cout << "Enter size of X: ";
    cin >> n;

    cout << "Enter size of Y: ";
    cin >> m;

    int X[300], Y[300];

    cout << "Enter elements of X:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> X[i];
    }

    cout << "Enter elements of Y:" << endl;
    for (int i = 0; i < m; i++) {
        cin >> Y[i];
    }

    int Z[600];
    int k = 0;

    for (int i = 0; i < n; i++) {
        Z[k++] = X[i];
    }

    for (int i = 0; i < m; i++) {
        Z[k++] = Y[i];
    }

    int sum = 0;
    int product = 1;

    cout << "Union elements: ";

    for (int i = 0; i < k; i++) {
        cout << Z[i] << " ";
        sum += Z[i];
        product *= Z[i];
    }

    cout << endl;
    cout << "Sum = " << sum << endl;
    cout << "Product = " << product << endl;
}

int main() {

    int choice;

    cout << "Меню" << endl;
    cout << "1 - Завдання 1" << endl;
    cout << "2 - Завдання 2" << endl;
    cout << "3 - Завдання 3" << endl;
    cout << "Вибор: ";
    cin >> choice;

    switch (choice) {
    case 1:
        task1();
        break;
    case 2:
        task2();
        break;
    case 3:
        task3();
        break;
    default:
        cout << "Не правильний вибір!" << endl;
    }

    return 0;
}