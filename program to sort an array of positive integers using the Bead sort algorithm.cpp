  //Ref: https://bit.ly/2rcvXK5
#include <iostream>
#include <vector>
using std::cout;
using std::vector;
 
void distribute(int dist, vector<int> &List) {
    if (dist > List.size() )
        List.resize(dist); 
     for (int i=0; i < dist; i++)
        List[i]++;
}
vector<int> beadSort(int *myints, int n) {
    vector<int> list, list2, fifth (myints, myints + n);
 
    cout << "1. Beads falling down: ";
    for (int i=0; i < fifth.size(); i++)
        distribute (fifth[i], list);
    cout << '\n';
 
    cout << "\nBeads on their sides: ";
    for (int i=0; i < list.size(); i++)
        cout << " " << list[i];
    cout << '\n';
 
    cout << "2. Beads right side up: ";
    for (int i=0; i < list.size(); i++)
        distribute (list[i], list2);
    cout << '\n';
 
    return list2;
}
 
int main() {
    int myints[] = {36, 4, 1, 4, 25, 32, 12, 43, 142, 6, 7, 1};
	cout << "Original array:\n";
	 for (int i=0; i < sizeof(myints)/sizeof(int); i++)
        cout << " " << myints[i];
    cout << '\n';
	vector<int> sorted = beadSort(myints, sizeof(myints)/sizeof(int));
	cout << "Sorted list/array: ";
	for(unsigned int i=0; i<sorted.size(); i++)
		cout << sorted[i] << ' ';
}
