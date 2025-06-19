#include <iostream>
#include <math.h>

using namespace std;

int main() {
  int n;
  long long suma = 0, a;
  float total;

  cin >> n;

  for(int i = 0;i < n;i++) {
    cin >> a;
    long long cubo[a];
    for(int j = 0;j < a;j++) {
      cin >> cubo[j];
      suma += cubo[j];
    }
    int resultado = sqrt(suma);
    if(pow(resultado,2) == suma) cout << "Yes" << endl;
    else cout << "No" << endl;
    suma = 0;
  }

  return 0;
}
	 	  	 	   			 	  	  	 	 	  		