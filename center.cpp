#include <iostream>
#include <string>

using namespace std;

const int ll = 80;

void center (string a, int b) { 
	
	int spaces = 0;
	
	if (b == 1) {
		
		cout << "\n";
   
    	spaces = (ll - a.size()) / 2; 

    	if (spaces > 0) cout << string(spaces, ' ');
   
    	cout << a << endl;
    	
	} else if (b == 2) {
	
    	spaces = (ll - a.size()) / 2; 
    
    	if (spaces > 0) cout << string(spaces, ' ');
   
    	cout << a << endl;
    	
	} else {
   
    	spaces = (ll - a.size()) / 2; 
    
    	if (spaces > 0) cout << string(spaces, ' ');
   
    	cout << a;
		
	}
 
}
