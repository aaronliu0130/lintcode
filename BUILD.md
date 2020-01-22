# Bulding

So, you'd like the build the project?

## Requirements

You need g++, a compiling tool that is usually included in the GNU Compiler Collection(gcc). You also want a Bourne Shell. For macOS users, clang++ is okay. For windows users, you have three choices: 1. Get a WSL distro 2. Get cygwin or mingw or their variants(Alternatively get git and use git bash) 3. Wait for more options to come

## Commands

Then run the code below! For cygwin/mingw users, omit the first line. Instead, make a new folder and `cd` into it.

```sh
mkdir build && cd build
g++ -std=c++0x -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"lintcode/lintcode.d" -MT"lintcode/lintcode.o" -o "lintcode/lintcode.o" "../lintcode/lintcode.cpp"
g++ -std=c++0x -o "main"  ./lintcode/medium/102.linked-list-cycle.o ./lintcode/medium/105.copy-list-with-random-pointer.o ./lintcode/medium/106.convert-sorted-list-to-binary-search-tree.o ./lintcode/medium/11.search-range-in-binary-search-tree.o ./lintcode/medium/124.longest-consecutive-sequence.o ./lintcode/medium/15.permutations.o ./lintcode/medium/16.permutations-ii.o ./lintcode/medium/17.subsets.o ./lintcode/medium/170.rotate-list.o ./lintcode/medium/191.maximum-product-subarray.o ./lintcode/medium/3.digit_counts.o ./lintcode/medium/4.ugly-number-ii.o ./lintcode/medium/5.kth-largest-element.o ./lintcode/medium/7.serialize-and-deserialize-binary-tree.o ./lintcode/medium/92.backpack.o ./lintcode/medium/95.validate-binary-search-tree.o ./lintcode/medium/98.sort-list.o ./lintcode/medium/99.reorder-list.o  ./lintcode/hard/121.word-laddder-ii.o ./lintcode/hard/20.diced-sum.o ./lintcode/hard/24.lfu-cache.o ./lintcode/hard/43.maximum-subarray-iii.o ./lintcode/hard/65.median-of-two-sorted-arrays.o ./lintcode/hard/87.remove-node-in-binary-search-tree.o  ./lintcode/easy/1.a-b-problem.o ./lintcode/easy/112.remove-duplicates-from-sorted-list.o ./lintcode/easy/114.unique-paths.o ./lintcode/easy/115.unique-paths-ii.o ./lintcode/easy/165.merge-two-sorted-lists.o ./lintcode/easy/174.remove-nth-node-from-end-of-list.o ./lintcode/easy/41.maximum-subarray.o ./lintcode/easy/69.binary-tree-level-order-traversal.o ./lintcode/easy/85.insert-node-in-a-binary-search-tree.o ./lintcode/easy/93.balanced-binary-tree.o ./lintcode/easy/96.partition-list.o ./lintcode/easy/97.maximum-depth-of-binary-tree.o  ./lintcode/lintcode.o
```

If you want to clean the build files, run the following depending on your platform, provided that you have no other `.d` and `.o` Files in the directory.:
For windows users use `del /S *.d`, `del /S *.o` and `del main`.
For unix users use `rm *.d && rm *.o && del main`.
Better building options avaliable soon!
