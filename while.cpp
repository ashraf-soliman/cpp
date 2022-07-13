#include <iostream>
#include <vector>
using namespace std;

int main (){

int i {1};
while (i<=10){
    if (i%2 == 0)
        cout << i << endl;
    ++i;
}

int scores [] {100,90,87};
i = 0;
while (i < 3)
{
    cout << scores[i] << " ";
    ++i;
}

int num {};
cout << "\nenter no < 100: " << endl;
cin >> num ;
while (num >= 100){
    cout << "\nenter no < 100: " << endl;
    cin >> num ;
}
cout << "Thanks" << endl;

bool done {false};
while (!done){
    cout << "enter no bet. 1 and 5: " << endl;
    cin >> num;
    if (num <= 1 || num >= 5)
        cout << "Out of range, try again" << endl;
    else {
        cout << "Thanks.\n" << endl;
        done = true;
    }
}

vector <int> vec {45, 34, 5, 5, 5, 5, -99};
int index {0};
int count_vec {0};

for (auto i : vec){
    if (i == -99){
        while (index < vec.size() && vec[index] != -99){
            ++count_vec;
            ++index;
        }
    }
    
}
if (count_vec != 0){
    cout << "-99    at          index:     " << index << endl;
    cout << "count of elements before -99: " << count_vec << endl << endl;
}
else
    cout << "vec doesn't have -99 in it.\n";        

return 0;
}