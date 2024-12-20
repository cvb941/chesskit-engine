//
//  fairystockfish+engine.m
//  ChessKitEngine
//

#include "fairystockfish+engine.h"
#include "../FairyStockfish/src/_main.h"
#include "../FairyStockfish/src/thread.h"

using namespace FairyStockfish;

void FairyStockfishEngine::initialize() {
    char empty[] = "";
    char* argv[] = { empty };
    __main(1, argv);
}

void FairyStockfishEngine::deinitialize() {
    ThreadPool().end();
}
