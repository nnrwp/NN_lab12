#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>

using namespace std;

int main(){
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    srand(time(0));
    int x = rand()%9;
    string a;
    if(x == 0) a = "A";
    else if(x == 1) a = "B+";
    else if(x == 2) a = "B";
    else if(x == 3) a = "C+";
    else if(x == 4) a = "C";
    else if(x == 5) a = "D+";
    else if(x == 6) a = "D";
    else if(x == 7) a = "F";
    else a = "W";
    cout << "You will get " << a << " in this 261102.";
    return 0;
}