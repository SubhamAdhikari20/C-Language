#include <iostream>
#include <map>
#include <string>
using namespace std;

// void display(map <string, int> &m){
//     map <string, int> :: iterator itr;
//     for (itr = m.begin(); itr != m.end(); itr++)
//     {
//         cout << (*itr).first << " " << (*itr).second << endl; 
//     }   
// }

int main(){
    map <string, int> marks_map;
    marks_map["Subham"] = 95;
    marks_map["Atal"] = 100;
    marks_map["Aayush"] = 96;
    marks_map["Aashish"] = 97;
    marks_map.insert({{"Dikashant", 98}, {"Bhuvan", 85}});
    map <string, int> :: iterator itr;
    itr = marks_map.begin();
    for (itr = marks_map.begin(); itr != marks_map.end(); itr++)
    {
        cout << (*itr).first << " " << (*itr).second << endl; 
    }   
    cout << "The size is " << marks_map.size() << endl;
    cout << "The max size is " << marks_map.max_size() << endl;
    cout << "The empty's return value is " << marks_map.empty() << endl;
    // display(marks_map);

    return 0;
}
/*
Map is an associative array
*/