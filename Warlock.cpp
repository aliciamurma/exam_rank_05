Warlock::Warlock(std::string name, std::string title) : name(name), title(title)
{
}

Warlock::~Warlock()
{
}

std::string const &Warlock::getName( void ) const
{
  return (this->name);
}

std::string const &Warlock::getTitle( void ) const
{
  return (this->title);
}

void  Warlock::setTitle(std::string const &str)
{
  this->title = str; 
}

void Warlock::introduce() const
{
  
}

// EL OPERATOR Y COPY VAN AQUI IGUAL, PERO ESTARAN COMO PRIVATE EN EL HPP

Warlock::Warlock(Warlock const &copy)
{
  *this = copy;
}

Warlock & Warlock::operator=(Warlock const & copy)
{
  this->name = copy.name;
  this->title = copy.title;
  return (*this);
}
