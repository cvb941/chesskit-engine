//
//  fairystockfish+engine.h
//  ChessKitEngine
//

#ifndef fairystockfish_engine_h
#define fairystockfish_engine_h

#include "engine.h"
#include <string>

/// Stockfish implementation of `Engine`.
class FairyStockfishEngine: public Engine {
public:
    void initialize();
    void deinitialize();
};

#endif /* stockfish_engine_h */
