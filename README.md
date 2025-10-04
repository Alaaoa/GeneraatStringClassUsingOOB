# Date & String Utilities in C++

## Overview
This project provides two reusable utility classes written in C++:

1. **clsDate**  
   A fully featured date handling class that supports:
   - Multiple constructors (system date, string, day/month/year, day order in year).
   - Validation of dates and leap years.
   - Calculations: days in month/year, difference in days, business days.
   - Date manipulation: add days, increase by months/years.
   - Calendar printing (month and year views).
   - Vacation/return date calculation (skipping weekends).
   - Date comparison operators.

2. **clsString**  
   A string utility class with practical functions:
   - Length and word count.
   - Conversions: uppercase, lowercase, capitalize words, invert case.
   - Count vowels, capital letters, small letters, specific characters.
   - String splitting, joining, trimming.
   - Reverse words, replace words, remove punctuations.

---

## Example Features

```cpp
clsDate d1("15/10/2025");
cout << d1.DateToString(); 
// => "15/10/2025"

clsString s("hello world");
cout << s.CountWords();      
// => 2
cout << clsString::UpperAllString(s.Value);
// => "HELLO WORLD"

│── clsString.h    # String utilities
│── main.cpp       # Demo & testing
│── README.md
