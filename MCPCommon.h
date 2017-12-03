#ifndef MCPCOMMON_h
#define MCPCOMMON_h

// Register definitions
#define MCP_REG_IODIR     0x00
#define MCP_REG_IOPOL     0x01   // IO polarity   (0 = normal, 1 = inverse)
#define MCP_REG_GPINTEN   0x02   // Interrupt on change (0 = disable, 1 = enable)
#define MCP_REG_DEFVAL    0x03   // Default comparison for interrupt on change (interrupts on opposite)
#define MCP_REG_INTCON    0x04   // Interrupt control (0 = change from previous, 1 = change from DEFVAL)
#define MCP_REG_IOCON     0x05   // IO Configuration: seqop/disslw/odr/intpol
#define MCP_REG_GPPU      0x06   // Pull-up resistor (0 = disabled, 1 = enabled)
#define MCP_REG_INTF      0x07   // Interrupt flag (read only) : (0 = no interrupt, 1 = pin caused interrupt)
#define MCP_REG_INTCAP    0x08   // Interrupt capture (read only) : value of GPIO at time of last interrupt
#define MCP_REG_GPIO      0x09   // Port value. Write to change, read to obtain value
#define MCP_REG_OLLAT     0x0A   // Output latch. Write to latch output. *** Read only reads latch, not port pin! ***

#define BIT_INTPOL 1
#define BIT_ODR 2


// Interrupts
#define IF_LOW 0
#define IF_HIGH 1
#define IF_CHANGED 2
#define ACTIVE_LOW 0
#define ACTIVE_HIGH 1
#define OPEN_DRAIN 2

#endif
