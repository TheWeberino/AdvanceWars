// Generated by dia2code
#ifndef IA__DUMBIA__H
#define IA__DUMBIA__H

#include <iostream>

namespace state {
  class State;
};
namespace engine {
  class Engine;
};
namespace state {
  class ElementList;
};
namespace ia {
  class AI;
};
namespace state {
  class Element;
}

#include "AI.h"
#include "state/Element.h"
#include "state/ElementList.h"

namespace ia {

  /// class DumbIA - 
  class DumbIA : public ia::AI {
    // Operations
  public:
    DumbIA (state::State* mainState, engine::Engine* mainEngine);
    void stateChanged (const state::StateEvent& e);
    void dumbMove (state::ElementList* ListOfElements, state::ElementList* ListOfUnits, state::ElementList* ListOfIa, engine::Engine* moteur);
  };

};

#endif
