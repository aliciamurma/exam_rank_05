#pragma once
#include <iostream>

class Warlock
{
  private:
    std::string name;
    std::string title;
  
    Warlock();
		Warlock(Warlock const &copy);
		Warlock & operator=(Warlock const &copy);
  
  public:
    Warlock(std::string name, std::string title);
    ~Warlock();
    std::string const &getName( void ) const; // getName, returns a reference to constant string
    std::string const &getTitle( void ) const; // getTitle, returns a reference to constant string
    void  setTitle(std::string const &str); // returns void and takes a reference to constant string
    void introduce() const;
};
