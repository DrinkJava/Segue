#ifndef MEASURE_H
#define MEASURE_H

#include "note.h"
#include "time_signature.h"
#include "key_signature.h"

class Measure
{
 private:
  TimeSignature Time_Sig;
  KeySignature Key_Sig;
  Note* startNote;
  Note* endNote;

 public:
  int beatsLeft;
  bool isFull;
  Measure(TimeSignature T, KeySignature K);
  int add(Note* n); //returns beatsLeft
  int add(Note* loc, Note* insert);
  int addSplit(Note* n); //return beatsLeft in new measure.
};
#endif
  
