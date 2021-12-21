// cout << "Press Enter 3 times to reveal your future.";
// cout << "You will get A in this 261102.";
#include<iostream>
#include<cstdlib>
#include<ctime>
#include<string>
using namespace std;
string random(int num){
    if(num == 0) return "A";
    else if(num == 1) return "B+";
    else if(num == 2) return "B";
    else if(num == 3) return "C+";
    else if(num == 4) return "C";
    else if(num == 5) return "D+";
    else if(num == 6) return "D";
    else if(num == 7) return "F";
    else return "W";
}
int main(){
    int grade;
    srand(time(0));
    cout << "Press Enter 3 times to reveal your future.";
    cin.get();
    cin.get();
    cin.get();
    grade = rand()%9;
    cout << "You will get " << random(grade) << " in this 261102.";
    return 0;
}
