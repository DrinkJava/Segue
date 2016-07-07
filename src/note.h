
#include "pitches.h"
#ifndef NOTE_H
#define NOTE_H

class Note
{
 private:
  unsigned int pitch;
  unsigned int duration;

 public:
  Note();
  Note(unsigned int duration);
  Note(unsigned int pitch, unsigned int duration);
};

#endif