#include <iostream>

using std::cout;
using std::cin;

int main (){
cout << "**** THIS IS TO CALCULATE YOUR AGE ****" << std::endl;
  
  int geboortedatum;
  int space;
  const int year = 2025;
  int age;

while (space){

    cout << "What year were you born?: "; 
    cin >> geboortedatum; 
     
      if(geboortedatum < 1909 || geboortedatum >= 2025){
       cout << "How are you alive..?" << '\n';
       }
      else if(geboortedatum > 1909){
       age = year - geboortedatum;

       cout << "You are " << age << " Years old" <<'\n';
       }

}
  return 0;
}



