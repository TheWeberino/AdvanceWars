// Generated by dia2code
#ifndef STATE__STATEEVENT__H
#define STATE__STATEEVENT__H


namespace state {
  class State;
  class StateObserver;
}

#include "StateEventID.h"
#include "StateObserver.h"

namespace state {

  /// class StateEvent - 
  class StateEvent : public state::StateObserver {
    // Associations
    state::StateEventID id;
    // Attributes
  protected:
    const State& state;
    // Operations
  public:
    virtual ~StateEvent ();
    StateEvent (const State& s, StateEventID id);
    bool operator== (StateEventID id) const;
    bool operator!= (StateEventID id) const;
  };

};

#endif