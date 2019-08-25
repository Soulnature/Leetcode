

#include<iostream>
#include<stdio.h>
#include<map>
#include<string>
#include<vector>
#define MAX=50000;
using namespace std;
class SnapshotArray {
public:
    SnapshotArray(int length) {
        snapCnt = 0;
        map<int,int> t;
        t[0] = 0;
        for(int i = 0;i < length; ++i){
            arr.push_back(t);
        }
    }

    void set(int index, int val) {
        arr[index][snapCnt] = val;
    }

    int snap() {
        snapCnt++;
        return snapCnt-1;
    }

    int get(int index, int snap_id) {
       auto it = arr[index].upper_bound(snap_id);
       it--;
       return arr[index][it->first];
    }
private:
    vector <map<int,int> >arr;
    int snapCnt;
};

int main(){
  cin>>length;
  SnapshotArray* obj = new SnapshotArray(length);
  cin>>index>>val;
  obj->set(index,val);
  int param_2 = obj->snap();

  int param_3 = obj->get(index,snap_id);
  return 0;
}









