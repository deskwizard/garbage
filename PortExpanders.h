#ifndef PORTEXPANDERS_h
#define PORTEXPANDERS_h

#include "MCP23008.h"
#include "MCPCommon.h"

class PortExpanders {

  public:
		PortExpanders();
		
		uint8_t begin(const uint8_t address);

		uint8_t pinMode(const uint8_t pin, const uint8_t pinMode);
		uint8_t portMode(const uint8_t portMode);

		uint8_t invertInput(const uint8_t pin, const bool state);

		uint8_t portRead();
		uint8_t digitalRead(const uint8_t pin);

		uint8_t portWrite(const bool state);
		uint8_t digitalWrite(const uint8_t pin, const bool state);

		uint8_t enableInterrupt(const uint8_t pin, const uint8_t intMode);
		uint8_t disableInterrupt(const uint8_t pin);
		uint8_t intPinMode(const uint8_t intPinMode);
		uint8_t getInterruptPin();
		uint8_t getInterruptPortValue();
		uint8_t getInterruptPinValue(const uint8_t pin);
		void clearInterrupts();

#ifdef ESP8266
		uint8_t begin(const uint8_t address, const uint8_t pinSDA, const uint8_t pinSCL);
#endif

	private:
		uint8_t chipAddr = CHIP_DEF_ADDR;	// Default to address 0x20 (All address pins low)

		uint8_t readRegister(const uint8_t registerAddr);
		uint8_t writeRegister(const uint8_t registerAddr, const uint8_t registerData);

		uint8_t GPIO_shadow = 0x00;
};


#endif
