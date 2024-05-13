#ifndef LSP_EVENT_H
#define LSP_EVENT_H

#include <functional>
#include <vector>

namespace lsp {
namespace Event {

/// @brief a simple event emitter
/// @tparam ...T any number of arguments to be passed to the callback function
template <typename... T> class Emitter {
public:
  typedef std::function<void(T...)> CallbackFunction;
  std::vector<CallbackFunction> Callbacks;

  /// @brief push a callback function to the list of listeners
  /// @param Func the callback function to be added to the list of listeners
  void on(CallbackFunction Func) { Callbacks.push_back(Func); }

  /// @brief remove a callback function from the list of listeners and to do it
  void emit(T... args) {
    for (auto &Callback : Callbacks) {
      Callback(args...);
    }
    Callbacks.clear();
  }
};
} // namespace Event
} // namespace lsp
#endif // !LSP_EVENT_H