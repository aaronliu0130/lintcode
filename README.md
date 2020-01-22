# lintcode [![Build Status](https://travis-ci.com/aaronliu0130/lintcode.svg?branch=master)](https://travis-ci.com/aaronliu0130/lintcode)

Solutions to Lintcode [US Giants Ladder](https://www.lintcode.com/ladder/2)

Each cpp file in the subfolder under src contains solution to questions in lintcode. If you want to run a specific problem, look at the cpp file. Uncomment one of the lines

```diff
+		//*
-		/*
		#pragma GCC diagnostic ignored "-Wunused-function"
		static//*/
		void test(){ // @suppress("Unused static function")
```

by removing the leading slash character. See [BUILD.md](BUILD.md) for build instructions.