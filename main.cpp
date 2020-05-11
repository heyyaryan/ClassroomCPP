#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

char pl, nckb, mgkbp, smnb;

void labasNa()
{
    cout << "Labas na!";
    exit(0);
}

void ayusinAngClassroom()
{
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;
    cout << "Ayusin ang law ng classroom!";
    sleep_for(2s);
    cout << "\nSinubmit mo na ba? (Y/N) --> ";
    cin >> smnb;
    switch (smnb)
    {
    case 'Y':
        labasNa();
        break;

    case 'N':
        cout << "Bawal lumabas!\n";
        smnb = {0};
        ayusinAngClassroom();
        break;

    default:
        ayusinAngClassroom();
        break;
    }
}

void mayGinawaKaBangPinagbabawal()
{
    cout << "May ginawa ka bang pinagbabawal? (Y/N) --> ";
    cin >> mgkbp;
    switch(mgkbp)
    {
    case 'Y':
        ayusinAngClassroom();
        break;

    case 'N':
        labasNa();
        break;
    }
}

void nagComplyKaBa()
{
    cout << "Nag comply ka ba? (Y/N) --> ";
    cin >> nckb;
    switch(nckb)
    {
    case 'Y':
        labasNa();
        break;

    case 'N':
        mayGinawaKaBangPinagbabawal();
        break;
    }
}

int main()
{
    using namespace std::this_thread;     // sleep_for, sleep_until
    using namespace std::chrono_literals; // ns, us, ms, s, h, etc.
    using std::chrono::system_clock;
    cout << "Welcome to Classroom!\n";
    sleep_for(2s);
    cout << "Pwedeng lumabas? (Y/N) --> ";
    cin >> pl;
    switch(pl)
    {
    case 'Y':
        labasNa();
        break;

    case 'N':
        nagComplyKaBa();
        break;
    }
}
