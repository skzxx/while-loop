#include <iostream>

int main () {
  //while infinity ∞
  int a = 5; //sebagai nilai awal indeka untuk memulai looping
  while( a < 10 /* sebagai batas looping
  */) {
    std::cout << "This is a looping, my friend" << std::endl;
  }
  //looping dengan batasan yang memaksa
  while (a < 10) {
    std::cout << "Looping, yeah" << std::endl;
    a = 11; // yang dimana a melebihi batas (10) yang membuatnya berhenti
    
  }
  
  // menggunakan operator assignment
  
  while( a < 10   {
    std::cout << "Fine looping, friend" << std::endl;
    a += 2; /* atau a = a + 2; 
    yang dimana kalau kita jabarkan seperti
    5 <=== indeks awal
    (5+2)=7
    (7+9)=9 <=== kurang dari sepuluh
    dan untuk selanjutnya akan berhenti
    */
  }
  
  //menggunakan indeks setiap Looping
  
  while( a <= 10 ) {
    std::cout << "Loopinggg " << a << std::endl;
    a += 1;
    /* jika dijabarkan akan
    Looping 5
    Looping 6
    Looping 7
    Looping 8
    Looping 9
    Looping 10
    */
  }
  
  std::cin.get();
  return 0;
  
}