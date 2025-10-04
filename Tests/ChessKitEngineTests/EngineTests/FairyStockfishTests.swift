//
//  FairyStockfishTests.swift
//  ChessKitEngineTests
//

@testable import ChessKitEngine
import XCTest

final class FairyStockfishTests: BaseEngineTests {

  override func setUp() async throws {
    engineType = .fairyStockfish
    try await super.setUp()
  }

}
