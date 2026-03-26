#include <stack>
using namespace std;
#include <iostream>


int main(){
stack <int> s;

s.push(2);
s.push(3);
s.push(4);
s.push(5);
s.push(6);


stack <int> s1;
s1.swap(s);

// while(!s1.empty()){
//     cout << s1.top()<<" ";
//     s1.pop();
// }
// cout <<endl;
cout << s1.size()<<endl;
cout <<s.size();


return 0;
}
