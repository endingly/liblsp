add_library(lsp
    jsonrpc/Message.cpp
    jsonrpc/MessageConnection.cpp
    jsonrpc/MessageReader.cpp
    protocol/LSProtocol.cpp
    #MessageHandler.cpp
    
    #LanguageServer.cpp
    lsp.cpp
)

target_compile_definitions(lsp PRIVATE _SILENCE_ALL_CXX17_DEPRECATION_WARNINGS=1)

target_link_libraries(lsp nlohmann_json::nlohmann_json asio::asio)

set_property(TARGET lsp PROPERTY CXX_STANDARD 17)