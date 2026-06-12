// Board config for Wiznet W5500-EVB-Pico2.
#define MICROPY_HW_BOARD_NAME               "W5500-EVB-Pico2"
#define MICROPY_HW_FLASH_STORAGE_BYTES      (1408 * 1024)

// Enable networking.
#define MICROPY_PY_NETWORK                  (1)
#define MICROPY_PY_NETWORK_HOSTNAME_DEFAULT "W5500-EVB"

// Wiznet HW config.
#define MICROPY_HW_WIZNET_SPI_ID            (0)
#define MICROPY_HW_WIZNET_SPI_BAUDRATE      (20 * 1000 * 1000)
#define MICROPY_HW_WIZNET_SPI_SCK           (18)
#define MICROPY_HW_WIZNET_SPI_MOSI          (19)
#define MICROPY_HW_WIZNET_SPI_MISO          (16)
#define MICROPY_HW_WIZNET_PIN_CS            (17)
#define MICROPY_HW_WIZNET_PIN_RST           (20)
#define MICROPY_HW_WIZNET_PIN_INTN          (21)

// USB CDC serial
#define MICROPY_HW_USB_CDC                  (1)
#define MICROPY_HW_USB_VID                  (0x2E8A)
#define MICROPY_HW_USB_PID                  (0x0005)
