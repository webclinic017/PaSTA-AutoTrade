#ifndef PASTA_STRATEGY_CHASE_MOMENTUM_STRATEGY_H_
#define PASTA_STRATEGY_CHASE_MOMENTUM_STRATEGY_H_

#include "absl/status/status.h"
#include "alpaca/alpaca.h"
#include "data_handler/data_handler.h"
#include "strategy/strategy.h"

namespace pasta {

class ChaseMomentumStrategy : public Strategy {
 public:
  ChaseMomentumStrategy(DataHandler* dh);
  absl::Status Init() override;

  // Public for testing only.
  bool IsEntryPoint(const std::string& ticker);

  void Test_SetDryRun();
 private:
  void ProcessNewData(const std::string& ticker);

  void MaybeEnterTrade(const std::string& ticker);

  void PositionManagement();


  void EnterTrade();

  void ClearPosition();

  absl::TimeZone nyc_;

  std::unique_ptr<alpaca::Client> client_;
  std::unique_ptr<alpaca::Account> account_;
  
  std::string trading_;
  int64_t quantity_;
  double breakeven_;
  int64_t enter_ts_;
  bool clear_;

  bool dry_run_;
};

}  // namespace pasta
#endif  // PASTA_STRATEGY_CHASE_MOMENTUM_STRATEGY_H_