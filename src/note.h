#ifndef NOTE_H
#define NOTE_H
#include "pitches.h"
#include <string>
class Note
{

  
 public:
  unsigned int pitch;
  unsigned int duration;
  unsigned int measure;
 
  Note* next;
  Note* prev;
  Note();
  Note(unsigned int duration);
  Note(unsigned int pitch, unsigned int duration);
  std::string toString() const;
};

#endif
