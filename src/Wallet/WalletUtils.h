// Copyright (c) 2011-2017, The ManateeCoin Developers, The Cryptonote developers
// Distributed under the MIT/X11 software license, see the accompanying
// file COPYING or http://www.opensource.org/licenses/mit-license.php.

#pragma once

#include <string>

#include "CryptoNoteCore/Currency.h"

namespace CryptoNote {

bool validateAddress(const std::string& address, const CryptoNote::Currency& currency);

}
