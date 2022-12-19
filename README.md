# Dirmaker for linux

This program will make folders with a file.cpp inside it for you!

## Table of contents
 [Customize it](#customaze-it)
 
 [How to build](#how-to-build)

## Customize it

This file is really simple to customize, first of all open the file with any text editor.

If you want to modify the name of the folder/file or also the extension, you need to change the text "folder" for the folder name in line 6 and 7, "file" for the file name in line 7 and ".cpp" for the extension in the line 7.
  ```c++
  string com1="mkdir folder_" + i;
  string com2="touch ./folder_"+i+"/file_"+i+".cpp";
  ```
## How to build

First you need to clone this repository.

  ```bash
  git clone https://github.com/diamxncl/dirmaker
  ```
Go into the directory you just cloned:

  ```bash
  cd dirmaker
  ```

You will need to compile the file before using it.
To compile it you can install g++ in your linux by doing this:

First update your linux:
  ```bash
  sudo apt update && sudo apt upgrade
  ```
Then install the program: 
  ```bash
  apt-get install g++
  ```

To compile the file with g++, do:
  ```bash
  g++ linux_dirmaker.cpp
  ```

Then execute it with:
  ```bash
  ./a.out
  ```
