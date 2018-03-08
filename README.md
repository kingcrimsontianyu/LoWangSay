# What is LoWangSay ?
LoWangSay, with a nod to the Linux program cowsay and fortune, is a C++11 utility code to generate a randomly selected witty quote at compile time. It uses `static_assert()` to print the quote.

# Who is Lo Wang ?
Lo Wang is the protagonist of the somewhat controversial video game [Shadow Warrior](http://shadowwarrior.wikia.com/wiki/Lo_Wang). Upon finding a fortune cookie in the game, a piece of witty remark unravels on the screen.

# How to use?
- Include the header file `LoWangSay.h` in your code.
- Compile your code using the flag `ENABLE_LO_WANG_SAY`.

```
cmake \
-DCMAKE_CXX_COMPILER=/usr/local/bin/g++-6.4.0 \
-DCMAKE_C_COMPILER=/usr/local/bin/gcc-6.4.0 \
-DBUILD_TESTING=ON \
../lo_wang_say

make test-lo-wang-say
```
