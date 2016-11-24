// Generated by dia2code
#ifndef STATE__STATE__H
#define STATE__STATE__H

#include <iostream>

namespace state {
  class ElementList;
  class ElementGrid;
  class Observable;
  class Player;
}

#include "ElementList.h"
#include "ElementGrid.h"
#include "Observable.h"
#include "Player.h"

namespace state {

  /// class State - 
  class State : public state::Observable {
    // Associations
    // Attributes
  protected:
    ElementList chars;
    ElementGrid grid;
    // Operations
  public:
    State ();
    ~State ();
    ElementGrid& getGrid ();
    ElementList& getChars ();
    void setGrid (const ElementGrid& grid);
    void setChars (const ElementList& list);
  };

};

#endif
