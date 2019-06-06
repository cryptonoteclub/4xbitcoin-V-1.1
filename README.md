# 4xBIT-V1

Copyright (c) 2018-2019, The Mybtcfx Developers.   
Portions Copyright (c) 2012-2017, The CryptoNote Developers, The Bytecoin Developers.


## # Building 4xBIT

### On *nix

Dependencies: GCC 4.7.3 or later, CMake 2.8.6 or later, and Boost 1.55 or later.

You may download them from:

* http://gcc.gnu.org/
* http://www.cmake.org/
* http://www.boost.org/
* Alternatively, it may be possible to install them using a package manager.

```
mkdir build
cd build
cmake ..
make
```

### On Ubuntu 16.04 LTS


1. Install dependencies
	``` 
	sudo apt-get install cmake build-essential python-dev gcc-4.9 g++-4.9 git libboost-dev libboost-chrono-dev libboost-thread-dev libboost-filesystem-dev libboost-regex-dev libboost-program-options-dev librocksdb-dev
	```

2. Clone source code
	```
	git clone https://github.com/mybtcfx/4xbitcoin-V-1.1.git 4xbitcoin
	cd 4xbitcoin
	```

3. Build
	```
	rm -rf build; mkdir -p build/release; cd build/release
	cmake -D STATIC=ON -D ARCH="default" -D CMAKE_BUILD_TYPE=Release ../..
	make
	```

The resulting executables can be found in `build/release/src`.

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

