# ShoppingCartFSI

This small project is meant to demonstrate examples of inheritance and polymorphism (object-oriented programming concepts) using C++.
Allows adding up to 3 items to the shopping cart at a time, display contents of the shopping cart, and export the contents of the shopping cart to a text file.

Set-up

1. Unzip ShoppingCartFSI.zip
2. Open Visual Studio Code
3. Drag Folder into Visual Studio Code
4. Install C/C++ & CodeRunner extensions
5. Navigate to Preferences > Settings > Type “run in terminal” in search settings bar
6. Toggle check “Code-Runner: Run in Terminal - whether to run code in integrated terminal”
7. In the same settings menu, type “run code configuration” in search settings bar
8. Scroll to Code-Runner: Executor Map (set the the executor of each language) and click Edit in settings.json
9. Replace the line “ "cpp": "cd $dir && g++ $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt”, ” 
with 
“ "cpp": "cd $dir && g++ -std=c++11 $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt", “
to have access to C++11 support
10. Ctrl+Alt+N to run
