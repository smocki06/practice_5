//for
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double current = X;
    int day;

    for (day = 1; current < Y; ++day) {
        current *= 1.1;
    }

    cout << day << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double current = X;
    int day = 1;

    for (; ; ++day) {
        current *= 1.1;
        if (current > Y) break;
    }

    cout << day << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    double current = X;
    int day;

    for (; current < Y; ) {
        current *= 1.1;
        day++;
    }

    cout << day << endl;
    return 0;
}
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    while (X < Y) {
        X *= 1.1;
        ++day;
    }
    cout << day << endl;
    return 0;
}

//while
#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double current = X;

    while (current < Y) {
        current *= 1.1;
        ++day;
    }

    cout << day << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    double X, Y;
    cin >> X >> Y;

    int day = 1;
    double current = X;

    do {
        current *= 1.1;
        ++day;
    } while (current < Y);

    if (X >= Y) {
        cout << 1 << endl;
    }
    else {
        cout << day << endl;
    }

    return 0;
}

