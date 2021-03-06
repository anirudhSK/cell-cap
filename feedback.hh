#ifndef FEEDBACK_HH
#define FEEDBACK_HH

#include <string>

class Feedback
{
public:
  int sender_id;
  double current_rate;
  double current_latency;
  uint64_t sent_timestamp,recv_timestamp;

  const std::string str( const size_t len ) const;
  bool operator==( const Feedback & other ) const;
};

#endif
