#include <iostream>
#include "ClsString.h"

int main() {
    clsString s("hello world from string class");

    std::cout << "Original: " << s.Value << "\n\n";

    // ---- Length ----
    std::cout << "Length: " << s.Length() << "\n";
    std::cout << "Static Length: " << clsString::Length("ABC") << "\n\n";

    // ---- CountWords ----
    std::cout << "Word count: " << s.CountWords() << "\n";
    std::cout << "Static Word count: " << clsString::CountWords("one two three") << "\n\n";

    // ---- Upper/Lower First Letter ----
    s.UpperFirstLetterOfEachWord();
    std::cout << "Upper first letter: " << s.Value << "\n";
    s.LowerFirstLetterOfEachWord();
    std::cout << "Lower first letter: " << s.Value << "\n\n";

    // ---- Upper/Lower whole string ----
    s.UpperAllString();
    std::cout << "Upper all: " << s.Value << "\n";
    s.LowerAllString();
    std::cout << "Lower all: " << s.Value << "\n\n";

    // ---- Invert case ----
    s.InvertAllLettersCase();
    std::cout << "Inverted case: " << s.Value << "\n\n";

    // ---- Count Letters ----
    std::cout << "Capital letters: " << s.CountCapitalLetters() << "\n";
    std::cout << "Small letters: " << s.CountSmallLetters() << "\n";
    std::cout << "Specific letter count ('l'): " << s.CountSpecificLetter('l') << "\n";
    std::cout << "Vowel count: " << s.CountVowels() << "\n\n";

    // ---- Split ----
    clsString s2("split these words here");
    auto vec = s2.Split(" ");
    std::cout << "Split: ";
    for (auto& w : vec) std::cout << "[" << w << "]";
    std::cout << "\n\n";

    // ---- Trim ----
    clsString s3("   trim me   ");
    s3.TrimLeft();
    std::cout << "Trim left: [" << s3.Value << "]\n";
    s3.SetValue("   trim me   ");
    s3.TrimRight();
    std::cout << "Trim right: [" << s3.Value << "]\n";
    s3.SetValue("   trim me   ");
    s3.Trim();
    std::cout << "Trim both: [" << s3.Value << "]\n\n";

    // ---- Join ----
    std::vector<std::string> words = { "a", "b", "c" };
    std::cout << "Join vector: " << clsString::JoinString(words, "-") << "\n";
    std::string arr[] = { "x", "y", "z" };
    std::cout << "Join array: " << clsString::JoinString(arr, 3, ",") << "\n\n";

    // ---- Reverse words ----
    clsString s4("one two three");
    s4.ReverseWordsInString();
    std::cout << "Reverse words: " << s4.Value << "\n\n";

    // ---- Replace ----
    clsString s5("i like cats and cats are cute");
    s5.SetValue(clsString::ReplaceWord(s5.Value, "cats", "dogs"));
    std::cout << "Replace 'cats' -> 'dogs': " << s5.Value << "\n\n";

    // ---- Remove punctuations ----
    clsString s6("Hello, world!!!");
    s6.RemovePunctuations();
    std::cout << "Remove punctuations: " << s6.Value << "\n\n";

    return 0;
}
