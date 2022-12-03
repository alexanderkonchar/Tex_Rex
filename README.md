# TexRex

A simple C++ program that allows you to extract text from any image. Use the included image file to test it out.

![TexRex](https://github.com/alexanderkonchar/Tex_Rex/blob/master/preview/TexRex.png?raw=true)

## Project Changes

I ended up pivoting from a song recognition program to a text recognition program. The main reason I did this was so I
didn't have to rely on a third-party api that required an internet connection to work. Besides that, much of the program
is very similar. You select an image or take a screenshot and the program spits out the text in the image. Instead of
using a third-party api, I'm using Google's open source tesseract library to do the actual image extraction bit. Just to
start out, I thought I'd make a cli only application and transition into a full gui app. Currently, the project doesn't
have enough classes and structs to qualify as the final project, but I'm sure once I start implementing GTK I'll be
adding quite a bit of files to the project. If all goes well, I plan to make this cross-platform and have a website
users can download installers from.

## Building From Source

This project relies on third-party dependencies such
as [Tesseract](https://tesseract-ocr.github.io/tessdoc/Installation.html)
and [Leptonica](https://github.com/DanBloomberg/leptonica). If you're running this project locally, make sure you've
installed them from your package manager or used the Tesseract installer. In case building the project results in a
linker error, you can either use the command `g++ main.cpp -o main -llept -ltesseract` or use the
included `CMakeLists.txt` file found in the [GitHub Repo](https://github.com/alexanderkonchar/Tex_Rex).