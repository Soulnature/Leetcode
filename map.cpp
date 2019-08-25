#include <map>
#include <string>
#include <iostream>
using namespace std;
int main(){
    map<int, string> mapStudent;
    mapStudent.insert(pair<int, string>(2,"zhao"));
    mapStudent.insert(pair<int, string>(1,"gayCheng"));
    mapStudent.insert(pair<int, string>(3,"hu"));
    map<int, string>::iterator iter;
    for(iter=mapStudent.begin();iter!=mapStudent.end();iter++){
        cout<<iter->first<<" "<<iter->second;
    }
}
