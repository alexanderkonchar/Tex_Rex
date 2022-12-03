#include <tesseract/baseapi.h>
#include <leptonica/allheaders.h>
#include <iostream>

using namespace std;

int main() {
    cout << "\n"
            "                      \n"
            "            ████████  \n"
            "           ███▄███████\n"
            "           ███████████\n"
            "           ███████████\n"
            "           ██████     \n"
            "           █████████    _______        _____\n"
            " █       ███████       |__   __|      |  __ \\\n"
            " ██    ████████████       | | _____  _| |__) |_____  __\n"
            " ███  ██████████  █       | |/ _ \\ \\/ /  _  // _ \\ \\/ /\n"
            " ███████████████          | |  __/>  <| | \\ \\  __/>  <\n"
            " ███████████████          |_|\\___/_/\\_\\_|  \\_\\___/_/\\_\\\n"
            "  █████████████       \n"
            "   ███████████        \n"
            "     ████████         \n"
            "      ███  ██         \n"
            "      ██    █         \n"
            "      █     █         \n"
            "      ██    ██        \n"
            "                      \n";
    string imageName;
    cout << "What's the name of the image you want to extract text from?\n";
    getline(cin, imageName);

    char *outText;

    auto *api = new tesseract::TessBaseAPI();
    // Initialize tesseract-ocr with English, without specifying tessdata path
    if (api->Init(nullptr, "eng")) {
        fprintf(stderr, "Could not initialize tesseract.\n");
        exit(1);
    }

    // Open input image with leptonica library
    Pix *image = pixRead(imageName.c_str());
    api->SetImage(image);
    // Get OCR result
    outText = api->GetUTF8Text();
    printf("Extracted text:\n%s", outText);
    // Destroy used object and release memory
    api->End();
    delete api;
    delete[] outText;
    pixDestroy(&image);

}
