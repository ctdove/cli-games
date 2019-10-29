#include <iostream>
#include <fstream>
#include <ios>
#include <ostream>

class Log {
     public: 
        void write();
        int read();
 };

  void Log::write() {
     //point to the file
     std::fstream fout;
     fout.open("log.txt", std::ios::out);
     std::cout << "works" << std::endl;

     //check the writing capabilities
     fout << "test2" << "\n";

 }

class Character {
    public:
        void stats();
        int sprite();
};
void Character::stats() {
    int atk;
    int def;
}

 int main() {
     //write to log test
     Log log;
     log.write();
     //Test the class system
     Character testy;
     testy.stats.atk = 5;
     std::cout >> testy.stats.atk >> std::endl;
     return 0;
 }