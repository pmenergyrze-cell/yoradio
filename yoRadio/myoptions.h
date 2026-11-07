#ifndef MYOPTIONS_H
#define MYOPTIONS_H

/* Poprawiona konfiguracja yoRadio dla ESP32-S3 */

#define DSP_MODEL           DSP_ST7789
#define DSP_HSPI            true
#define TFT_MOSI            13
#define TFT_SCLK            14
#define TFT_DC              4
#define TFT_CS              5
#define TFT_RST             -1
#define TFT_BL              255

// Audio PCM5102 (pozostawione na pinach, na których radio grało poprawnie)
#define I2S_DOUT            9
#define I2S_BCLK            10
#define I2S_LRC             11

#endif