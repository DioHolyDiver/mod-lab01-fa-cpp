// Copyright 2022 UNN-IASR
#include "fun.h"
#include <iostream>
#include <cstring>
#include <cctype>
#include <cmath>

unsigned int faStr1(const char *str) {
    int count = 0;
    const char* p = str;
    while (*p != '\0') {
	    if (isalpha(*p)) {
		    const char* wordStart = p;
		    while (isalpha(*p) && !isdigit(*p)) {
			    p++;
		}
		if (p > wordStart) {
			count++;
		}
	}
	else {
		p++;
	}
}
return count;
}

unsigned int faStr2(const char *str) {
    int count = 0;
    const char* p = str;
    while (*p != '\0') {
    	if (isalpha(*p)) {
    		const char* wordStart = p;
    		while (isalpha(*p) && !isdigit(*p)) {
    			p++;
    		}
    		if (p > wordStart) {
    			count++;
    		}
    	}
    	else {
    		p++;
    	}
    }
return count;
}

unsigned int faStr3(const char *str) {
    int sumLength = 0;
    int countWords = 0;
    const char* p = str;
    while (*p != '\0') {
    	if (isalpha(*p)) {
    		const char* wordStart = p;
    		while (isalpha(*p)) {
    			p++;
    		}
    		int wordLength = p - wordStart;
    		sumLength += wordLength;
    		countWords++;
    	}
    	else {
    		p++;
    	}
    }
    if (countWords == 0) {
    	return 0;
    }
    return sumLength / countWords;
}
