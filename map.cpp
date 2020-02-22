// this is an example for map in c++

#include <iostream>
#include <string>
#include <map>
using namespace std;

int main(){
    map<string, int> mymap =
    {
        {"alpha", 0},
        {"beta", 0},
        {"gamma", 0}
    };

    // assigning values to keys in map
    mymap.at("alpha") = 10;
    mymap.at("beta") = 20;
    mymap.at("gamma") = 30;

    for (auto& x : mymap){
        cout << x.first << ": " << x.second << endl;
    }

    // method to check whether a key exists in map
    // > 0 means key exists in the map
    if (!mymap.count("omega") > 0) {
        cout << "key doesnt exist" << endl;
    }


    return 0;
}