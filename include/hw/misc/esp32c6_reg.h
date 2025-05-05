#pragma once

#define DR_REG_FRAMEBUF_BASE                    0x21000000

#define DR_REG_UART0_BASE                       0x60000000
#define DR_REG_UART1_BASE                       0x60001000
#define DR_REG_AES_XTS_BASE                     0x60002000
#define DR_REG_SPI0_BASE                        0x60002000 // This was mapped here in an early version of the docs, and
#define DR_REG_SPI1_BASE                        0x60003000 // here https://docs.esp-rs.org/esp-hal/esp-hal/0.23.1/esp32c6/esp_hal/peripherals/
// RESERVED                                     0x60003000
#define DR_REG_I2C_EXT_BASE                     0x60004000
#define DR_REG_UHCI0_BASE                       0x60005000
#define DR_REG_RMT_BASE                         0x60006000
#define DR_REG_LEDC_BASE                        0x60007000
#define DR_REG_TIMERGROUP0_BASE                 0x60008000
#define DR_REG_TIMERGROUP1_BASE                 0x60009000
#define DR_REG_SYSTIMER_BASE                    0x6000a000
#define DR_REG_TWAI0_BASE                       0x6000b000
#define DR_REG_I2S_BASE                         0x6000c000
#define DR_REG_TWAI1_BASE                       0x6000d000
#define DR_REG_APB_SARADC_BASE                  0x6000e000
#define DR_REG_USB_SERIAL_JTAG_BASE             0x6000f000
#define DR_REG_INTERRUPT_BASE                   0x60010000
// RESERVED                                     0x60011000
#define DR_REG_PCNT_BASE                        0x60012000
#define DR_REG_SOC_ETM_BASE                     0x60013000
#define DR_REG_MCPWM_BASE                       0x60014000
#define DR_REG_PARL_IO_BASE                     0x60015000
#define DR_REG_SDIO_HINF_BASE                   0x60016000
#define DR_REG_SDIO_SLC_BASE                    0x60017000
#define DR_REG_SDIO_SLC_HOST_BASE               0x60018000
// RESERVED                                     0x60019000
#define DR_REG_GDMA_BASE                        0x60080000
#define DR_REG_GP_SPI2_BASE                     0x60081000
// RESERVED										0x60082000
#define DR_REG_AES_BASE                         0x60088000
#define DR_REG_SHA_BASE                         0x60089000
#define DR_REG_RSA_BASE                         0x6008a000
#define DR_REG_ECC_BASE                         0x6008b000
#define DR_REG_DIGITAL_SIGNATURE_BASE           0x6008c000
#define DR_REG_HMAC_BASE                        0x6008d000
// RESERVED                                     0x6008e000
#define DR_REG_IO_MUX_BASE                      0x60090000
#define DR_REG_GPIO_MATRIX_BASE                 0x60091000
// #define DR_REG_GPIO_EXT_BASE                 0x60091f00 // This was mapped here in an early version of the docs
#define DR_REG_MEM_MONITOR_BASE                 0x60092000
// RESERVED										0x60094000
#define DR_REG_HP_SYSREG_BASE                   0x60095000
#define DR_REG_PCR_BASE                         0x60096000 /* Power/Clock/Reset register */
// RESERVED										0x60097000
#define DR_REG_TEE_BASE                         0x60098000
#define DR_REG_HP_APM_BASE                      0x60099000
// #define DR_REG_LP_APM0_BASE                  0x60099800 // This was mapped here in an early version of the docs
// RESERVED										0x6009a000
// #define DR_REG_PWDET_CONF_BASE               0x600a8010 // This was mapped here in an early version of the docs
// #define DR_REG_I2C_ANA_MST                   0x600af800 // This was mapped here in an early version of the docs
#define DR_REG_PMU_BASE                         0x600b0000
#define DR_REG_LP_CLKRST                        0x600b0400
#define DR_REG_EFUSE_BASE                       0x600b0800
#define DR_REG_LP_RTC_TIMER_BASE                0x600b0c00
#define DR_REG_LP_AON_BASE                      0x600b1000
#define DR_REG_LP_UART_BASE                     0x600b1400
#define DR_REG_LP_I2C_BASE                      0x600b1800
#define DR_REG_LP_WDT_BASE                      0x600b1c00
#define DR_REG_LP_IO_MUX_BASE                   0x600b2000
#define DR_REG_LP_I2C_ANA_MST_BASE              0x600b2400
#define DR_REG_LP_PERI_BASE                     0x600b2800
#define DR_REG_LP_ANA_PERI_BASE                 0x600b2c00
// RESERVED										0x600b3000
#define DR_REG_LP_TEE_BASE                      0x600b3400
#define DR_REG_LP_APM_BASE                      0x600b3800
// RESERVED										0x600b3c00 // This was mapped here in an early version of the docs to DR_REG_OPT_DEBUG
#define DR_REG_RV_TRACE_BASE                    0x600c0000
// RESERVED										0x600c1000
#define DR_REG_ASSIST_DEBUG_BASE                0x600c2000
// RESERVED										0x600c3000
#define DR_REG_INTPRI_BASE                      0x600c5000
// RESERVED										0x600c6000
#define DR_REG_EXTMEM_BASE                      0x600c8000
#define DR_REG_EMAC_BASE                        0x600cd000

#define ESP32C6_IO_START_ADDR                   (DR_REG_UART0_BASE)
#define ESP32C6_UART_COUNT                      2
