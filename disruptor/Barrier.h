// Barrier.h

#ifndef BARRIER_H
#define BARRIER_H

#include "Sequencer.h"
#include <memory>

class Barrier {
public:
  Barrier(std::shared_ptr<Sequencer> sequencer);
  void waitFor(long sequence);

private:
  std::shared_ptr<Sequencer> sequencer_;
};

#endif // BARRIER_H
