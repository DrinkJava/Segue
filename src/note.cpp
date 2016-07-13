#include "note.h"
#include <string>
#include <iostream>
Note::Note()
{
  
}

Note::Note(unsigned int duration)
{
  this->duration = duration;
}

Note::Note(unsigned int pitch, unsigned int duration)
{
  this->pitch = pitch;
  this->duration = duration;
}

std::string Note::toString() const
{
  std::string info;
  info += std::to_string(pitch);
  info += std::to_string(duration);
  return info;
}
    
