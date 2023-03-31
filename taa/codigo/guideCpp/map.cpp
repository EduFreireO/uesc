#include <iostream>
#include <map>
using namespace std;
int main(){
    map <string, int > person;

    person["Eduardo"] = 20;
    person["Fulano"] = 35;
    person["Sicrano"] = 47;

    /*Como iterar*/
    
    // Iterator
    map < string, int> :: iterator it;
    for(it = person.begin(); it != person.end(); it++)
        cout << it -> first <<endl;

    for(auto &x : person){
        cout << x.first <<" : " << x.second << endl; 
    }
    printf("\n\n");
    for(auto [key, value] : person)
        cout << key <<" : " << value << endl; 
    
    for(auto [key, value] : person)
        cout << key <<": "<< value << endl; 

}