#include <iostream>
#include <fstream>
#include <ios>
#include <ostream>

 class log {
     public: 
        void write();
        int read();
 };

  void log::write() {
     //point to the file
     std::fstream fout;
     fout.open("log.txt", std::ios::out);
     std::cout << "works" << std::endl;

     //check the writing capabilities
     fout << "test2" << "\n";
     return 0;

 }
 int log::read() {
     //point to the file
     std::fstream fin;
     fin.open("log.txt", std::ios::in);
 }
 
int main() {
    log log;
    log.write();
    //Declare other functions
    std::cout << "test";
    return 0;
}