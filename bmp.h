#pragma once

struct BitmapInfoHeader
{
    unsigned int headerSize;   // Must be 40d (28h) - offset 0E
    unsigned int widthPixels;  // offset 12
    unsigned int heightPixels; // offset 16
    short colorPlanes;         // Must be 1; offset 1A
    short bitsPerPixel;        // offset 18
};

struct BitmapFileHeader
{
    unsigned char signature[2];   // offset 00
    unsigned int fileSize;        // offset 02
    short reserved1;              // offset 06
    short reserved2;              // offset 08
    unsigned int pixelDataOffSet; // offset 0A
};
