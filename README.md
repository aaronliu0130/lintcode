# lintcode [![Build Status](https://travis-ci.com/aaronliu0130/lintcode.svg?branch=master)](https://travis-ci.com/aaronliu0130/lintcode)
Solutions to Lintcode [US Giants Ladder](beestar.org)

Each cpp file in the subfolder under src contains solution to questions in lintcode. If you want to run a specific problem, look at the cpp file. You should see the following code:

		//*
		#pragma GCC diagnostic ignored "-Wunused-function"
		static//*/
		void test(){ // @suppress("Unused static function")
 
change the code into

		/*
		#pragma GCC diagnostic ignored "-Wunused-function"
		static//*/
		void test(){ // @suppress("Unused static function")
		
by removing the leading slash character and `g++` to build. Then execute the binary.
