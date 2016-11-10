// Generated by dia2code
#ifndef STATE__INFANTRY__H
#define STATE__INFANTRY__H


namespace state {
  class Element;
  class Ground;
}

#include "TypeID.h"
#include "Ground.h"

namespace state {

  /// class Infantry - 
  class Infantry : public state::Ground {
    // Operations
  protected:
      TypeID test;
  public:
    Infantry ();
    TypeID getTypeID ();
    bool  equals (const Element& other) const;
    void setTypeID(TypeID soldier);
  };

};

#endif
