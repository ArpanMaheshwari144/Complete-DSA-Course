// UnorderedMap in STL -> TC -> O(1)

#include <bits/stdc++.h>
using namespace std;

int main()
{
    // creation of map
    unordered_map<string, int> m;

    // insertion(1st way)
    pair<string, int> pair1 = make_pair("arpan", 3);
    m.insert(pair1);

    // insertion(2nd way)
    pair<string, int> pair2("adarsh", 2);
    m.insert(pair2);

    // insertion(3rd way)
    m["mera"] = 1;
    m["mera"] = 2; // now above entry should be overridden

    // search
    cout << m["mera"] << endl;
    cout << m.at("arpan") << endl;

    // cout << m.at("unknown") << endl; // this will throw exception
    cout << m["unknown"] << endl; // this will create entry for that particular key

    cout << m["unknown"] << endl; // this will create entry for that particular key
    cout << m.at("unknown") << endl;

    cout << m.size() << endl;

    cout << m.count("arpan") << endl; // if any key is present then it will return 1 otherwise 0

    m.erase("arpan");
    cout << m.size() << endl;

    // traverse the map using loops
    for (auto it : m)
    {
        cout << it.first << " " << it.second << endl;
    }

    // traverse the map using iterator
    unordered_map<string, int>::iterator it = m.begin();
    while (it != m.end())
    {
        cout << it->first << " " << it->second << endl;
        it++;
    }

    return 0;
}