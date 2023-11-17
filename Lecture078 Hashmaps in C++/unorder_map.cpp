#include <iostream>
#include <map>
#include <unordered_map>
using namespace std;

int main() {

    //creation
    unordered_map <string, int> m;

    //insertion
    //1
    pair <string, int> p = make_pair("babbar", 3);
    m.insert(p);

    //2
    pair <string, int> pair2("love", 2);
    m.insert(pair2);

    //3
    m["mera"] = 1;

    //Searching
    cout << m["mera"] << endl;
    cout << m.at("love") << endl;

    //cout << m.at("unknown") << endl;    Throw an error
    cout << m["unknown"] << endl;        // Give entry to the map

    //Size
    cout << "Size of map = " << m.size() << endl;

    //to check presence
    cout << m.count("love") << endl;

    //Delete an element
    m.erase("love");

    //Traverse
    //1
    for (auto i:m)
        cout << i.first << " " << i.second << endl;

    //2
    unordered_map <string, int> :: iterator it = m.begin();

    while(it != m.end()){
        cout << it->first << " " << it->second << endl;
        it++;
    }

}