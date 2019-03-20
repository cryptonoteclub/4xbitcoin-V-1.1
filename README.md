# 4xBIT

Copyright (c) 2018-2019, The Mybtcfx Developers.   
Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.




# How to Compile

```sudo apt-get -y install build-essential libssl-dev libboost-all-dev```

```sudo apt-get -y install gcc-4.8 g++-4.8  git cmake```

```git clone https://github.com/mybtcfx/4xbitcoin```

```cd 4xBIT```

```mkdir build ; cd build```

```cmake ..```

```make```




## Introduction

4xBIT is a private, secure, untraceable, decentralised digital currency. You are your bank, you control your funds, and nobody can trace your transfers unless you allow them to do so.

**Privacy:** 4xBIT uses a cryptographically sound system to allow you to send and receive funds without your transactions being easily revealed on the blockchain (the ledger of transactions that everyone has). This ensures that your purchases, receipts, and all transfers remain absolutely private by default.

**Security:** Using the power of a distributed peer-to-peer consensus network, every transaction on the network is cryptographically secured. Individual wallets have a 25 word mnemonic seed that is only displayed once, and can be written down to backup the wallet. Wallet files are encrypted with a passphrase to ensure they are useless if stolen.

**Untraceability:** By taking advantage of ring signatures, a special property of a certain type of cryptography, 4xBIT is able to ensure that transactions are not only untraceable, but have an optional measure of ambiguity that ensures that transactions cannot easily be tied back to an individual user or computer.

## About this Project

This is the core implementation of 4xBIT. It is open source and completely free to use without restrictions, except for those specified in the license agreement below. There are no restrictions on anyone creating an alternative implementation of 4xBIT that uses the protocol and network in a compatible manner.

As with many development projects, the repository on Github is considered to be the "staging" area for the latest changes. Before changes are merged into that branch on the main repository, they are tested by individual developers in their own branches, submitted as a pull request, and then subsequently tested by contributors who focus on testing and code reviews. That having been said, the repository should be carefully considered before using it in a production environment, unless there is a patch in the repository for a particular show-stopping issue you are experiencing. It is generally a better idea to use a tagged release for stability.

**Anyone is welcome to contribute to 4xBIT's codebase!** If you have a fix or code change, feel free to submit it as a pull request directly to the "master" branch. In cases where the change is relatively small or does not affect other parts of the codebase it may be merged in immediately by any one of the collaborators. On the other hand, if the change is particularly large or complex, it is expected that it will be discussed at length either well in advance of the pull request being submitted, or even directly on the pull request.

# License

4xBIT is licensed under the "MIT License", see [LICENSE](LICENSE) for more info.
### About
Forknote is innovative way to create Cryptonote (https://cryptonote.org) based cryptotokens. It gives the users the ability to create cryptotokens just by creating a simple configuration file.

### Dependencies
* GCC 4.7.3 or later     (http://gcc.gnu.org/)
* CMake 2.8.6 or later   (http://www.cmake.org/)
* Boost 1.55 or later    (http://www.boost.org/)
* MSVC 2013 (Windows only)

Step by step Windows instructions:
https://github.com/forknote/cryptonote-generator/blob/master/docs/windows-requirements-install.md

Ubuntu (tested on Ubuntu 14.04) / Mac dependencies install script:
https://github.com/forknote/cryptonote-generator/blob/master/configure.sh


### Usage
1. Download or compile the binaries
2. Create configuration file. The easiest way is to use the form on http://forknote.net
3. Start the daemon:
```
./forknoted --config-file PATH_TO_YOUR_CONFIG
```

### Configuration parameters
Use http://forknote.net to create configuration files.

All fields supported:
```
GENESIS_COINBASE_TX_HEX=     // REQUIRED. Use " ./forknoted --config-file PATH_TO_CONFIG --print-genesis-tx " to generate 
CRYPTONOTE_NAME=my_coin
p2p-bind-port=33669
rpc-bind-port=33670
seed-node=127.0.0.1:33669    // format:  IP:PORT
seed-node=127.0.0.2:33669    
UPGRADE_HEIGHT_V2=1             // REQUIRED. Use 1 for new cryptotokens
UPGRADE_HEIGHT_V3=2             // REQUIRED. Use 2 for new cryptotokens
MONEY_SUPPLY=18446744073709551615
EMISSION_SPEED_FACTOR=18
GENESIS_BLOCK_REWARD=0           // premined coins. Default: 0
DIFFICULTY_TARGET=120
CRYPTONOTE_DISPLAY_DECIMAL_POINT=12
DEFAULT_DUST_THRESHOLD=1000000
MINIMUM_FEE=1000000
CRYPTONOTE_MINED_MONEY_UNLOCK_WINDOW=10
CRYPTONOTE_BLOCK_GRANTED_FULL_REWARD_ZONE=20000
CRYPTONOTE_PUBLIC_ADDRESS_BASE58_PREFIX=120
BYTECOIN_NETWORK=b2889400-e6f5-b62d-8d37-8fa91779dc7e
P2P_STAT_TRUSTED_PUB_KEY=4d26c4df7f4ca7037950ad026f9ab36dd05d881952662992f2e4dcfcafbe57eb
CHECKPOINT=10000:70d2531151529ac00bf875281e15f51324934bc85e5733dcd92e1ccb1a665ff8   // format: HEIGHT:BLOCK_ID
CHECKPOINT=20000:80d2dd05d8819526629235722e15f5f9ab36dd05d881952662992f2e4dcfcafb

// simplewallet parameters
wallet-rpc-bind-ip=127.0.0.1        // instead rpc-bind-ip
wallet-rpc-bind-port=33671          // instead rpc-bind-port
SYNC_FROM_ZERO=1                    // to sync the wallet from block 0. Used for premine coins or brain wallets
```

---
This code is generated by Cryptonote generator - https://github.com/forknote/cryptonote-generator
Seed source - https://github.com/amjuarez/bytecoin