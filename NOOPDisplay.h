#ifndef NOOP_DISPLAY_H
#define NOOP_DISPLAY_H

#if defined(ESP8266)

#include <SSD1306.h>
#include "font.h"
#include "images.h"

#define LCD_STD 0			// Standard LCD
#define LCD_I2C 1

class NOOPDisplay {
public:
	NOOPDisplay(uint8_t _addr, uint8_t _sda, uint8_t _scl) {
		cx = 0;
		cy = 0;
		for(byte i=0;i<NUM_CUSTOM_ICONS;i++) custom_chars[i]=NULL;
	}
    void init() {
        
    }
	void begin() {
	}
	void clear() {
	}
	void clear(int start, int end) {
	}
	
	uint8_t type() { return LCD_I2C; }
	void noBlink() {/*no support*/}
	void blink() {/*no support*/}
	void setCursor(uint8_t col, int8_t row) {
		/* assume 4 lines, the middle two lines
			 are row 0 and 1 */
		cy = (row+1)*fontHeight;
		cx = col*fontWidth;
	}
	void noBacklight() {/*no support*/}
	void backlight() {/*no support*/}
	size_t write(uint8_t c) {
		return 1;
	}
	size_t write(const char* s) {
		uint8_t nc = strlen(s);
		return nc;
	}

    
	void createChar(byte idx, PGM_P ptr) {
		
	}


    void displayOn() {};
    void displayOff() {};
    void setBrightness(byte x) {};
    void display() {};
    void setColor(byte x) {};
    void fillCircle(int x, int y, int z) {};
    void drawXbm(int x, int y, int w, int h, const byte *xx) {};

    // maan...

    size_t printf(const char * format, ...)  __attribute__ ((format (printf, 2, 3))) {return 0;};
    size_t printf_P(PGM_P format, ...) __attribute__((format(printf, 2, 3))) {return 0;};
    size_t print(const __FlashStringHelper *) {return 0;};
    size_t print(const String &) {return 0;};
    size_t print(const char[]) {return 0;};
    size_t print(char) {return 0;};
    size_t print(unsigned char, int = DEC) {return 0;};
    size_t print(int, int = DEC) {return 0;};
    size_t print(unsigned int, int = DEC) {return 0;};
    size_t print(long, int = DEC){return 0;};
    size_t print(unsigned long, int = DEC){return 0;};
    size_t print(long long, int = DEC){return 0;};
    size_t print(unsigned long long, int = DEC){return 0;};
    size_t print(double, int = 2){return 0;};
    size_t print(const Printable&){return 0;};

    size_t println(const __FlashStringHelper *){return 0;};
    size_t println(const String &s){return 0;};
    size_t println(const char[]){return 0;};
    size_t println(char){return 0;};
    size_t println(unsigned char, int = DEC){return 0;};
    size_t println(int, int = DEC){return 0;};
    size_t println(unsigned int, int = DEC){return 0;};
    size_t println(long, int = DEC){return 0;};
    size_t println(unsigned long, int = DEC){return 0;};
    size_t println(long long, int = DEC){return 0;};
    size_t println(unsigned long long, int = DEC){return 0;};
    size_t println(double, int = 2){return 0;};
    size_t println(const Printable&){return 0;};
    size_t println(void){return 0;};
private:
	uint8_t cx, cy;
	uint8_t fontWidth, fontHeight;
	PGM_P custom_chars[NUM_CUSTOM_ICONS];
};

#endif

#endif // NOOP_DISPLAY_H



