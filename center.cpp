#include <iostream>
#include <string>

using namespace std;

const int ll = 80;

void center (string a, bool b) { 
	
	int spaces = 0;
	
	if (b) {
		
		cout << "\n";
   
    	spaces = (ll - a.size()) / 2; 

    if (spaces > 0) cout << string(spaces, ' ');
   
    	cout << a << endl;
    	
	} else {
   
    	spaces = (ll - a.size()) / 2; 
    
    	if (spaces > 0) cout << string(spaces, ' ');
   
    	cout << a << endl;
		
	}
 
}
