#include <gtest/gtest.h>
#include "lsp/jsonrpc/Event.h"

TEST(EventTest, test_event)
{
    using namespace lsp::Event;
    Emitter<int> emitter;
    auto callback = [](int value)
    { std::cout << "Received value: " << value << "\n"; };
    emitter.on(callback);
    emitter.emit(42);
}