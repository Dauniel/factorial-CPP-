# include <iostream>
using namespace std;

int main () {

int num, num2,num3, i;

cin >> num;
num2 = num;

for (i = 1; i <= num; i++) {

num2--;
num *= num2;

if (num2 == 1) {
break;
}

}
cout << num << "\n";

}