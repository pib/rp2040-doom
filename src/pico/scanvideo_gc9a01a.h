#pragma once

#define PICO_SCANVIDEO_PIXEL_FROM_RGB8(r,g,b) ((((b)>>3) << 11)|(((g)>>2) << 5)|((r)>>3))