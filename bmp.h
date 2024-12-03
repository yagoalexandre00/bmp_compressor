#pragma once

struct BitmapInfoHeader
{
    unsigned int headerSize; // Must be 40d (28h) - Offset 0E
    
};

struct BitmapFileHeader
{
    unsigned char signature[2];   // offset 00
    unsigned int fileSize;        // offset 02
    short reserved1;              // offset 06
    short reserved2;              // offset 08
    unsigned int pixelDataOffSet; // offset 0A
};
