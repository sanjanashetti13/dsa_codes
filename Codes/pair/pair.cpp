#include <iostream>
#include <vector>
using namespace std;

int main(){

    /*1

    pair<int,int> p = {1,2};

    cout << p.first <<endl; //1
    cout << p.second <<endl; //2

    */

    /*2
    pair <int,char> p = { 1, 's'};
    cout << p.first <<endl;
    cout << p.second <<endl;

    return 0;
    */


    /*3*/
    pair <int,pair<int,char>> p = {2,{4,'c'}};
    cout << p.first <<endl; //2
    //cout << p.second <<endl; //no output
    cout <<p.second.first <<endl; //4
    cout << p.second.second <<endl; //c

    return 0;

}
