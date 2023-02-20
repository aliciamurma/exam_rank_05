#include <iostream>

class Coplien
{
  private:
    std::string name;
    std::string title;
  
  public:
    Coplien(std::string name, std::string title);
    const std::string &getName( void ); // getName, returns a reference to constant string
    const std::string &getTitle( void ); // getTitle, returns a reference to constant string
    void  setTitle(const &std::string str); // returns void and takes a reference to constant string
    * void introduce() const;
}
