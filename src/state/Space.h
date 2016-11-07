// Generated by dia2code
#ifndef STATE__SPACE__H
#define STATE__SPACE__H


namespace state {
  class Element;
  class StaticElement;
}

#include "SpaceTypeID.h"
#include "StaticElement.h"

namespace state {

  /// class Space - 
  class Space : public state::StaticElement {
    // Associations
    state::SpaceTypeID spaceTypeID;
    // Attributes
  protected:
    bool free;
    // Operations
  public:
    Space (SpaceTypeID sid);
    bool const isSpace ();
    TypeID const getTypeID ();
    SpaceTypeID const getSpaceTypeID ();
    void setSpaceTypeID (SpaceTypeID sid, bool free);
    bool const equals (const Element& other);
    bool isFree ();
  };

};

#endif
