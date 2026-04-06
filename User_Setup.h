// 适配：ESP32 + 2.4寸 ILI9341 屏幕 + XPT2046 触摸芯片
// #########################################################################
// Section 1. 屏幕驱动配置
// #########################################################################
#define ILI9341_DRIVER       // 启用ILI9341驱动
#define TFT_WIDTH  240       // 2.4寸屏幕分辨率
#define TFT_HEIGHT 320

// 屏幕背光配置（高电平点亮）
#define TFT_BACKLIGHT_ON HIGH
#define TFT_BL   5           // 背光引脚GPIO5

// #########################################################################
// Section 2. 屏幕+触摸引脚定义（严格对应你的接线）
// #########################################################################
// 屏幕显示引脚（显示正常，无需修改）
#define TFT_MOSI 23    // 屏幕MOSI/SDI → GPIO23
#define TFT_MISO 19    // 屏幕MISO/SDO → GPIO19
#define TFT_SCLK 18    // 屏幕SCK → GPIO18
#define TFT_CS   15    // 屏幕CS/片选 → GPIO15
#define TFT_DC   2     // 屏幕DC/RS → GPIO2
#define TFT_RST  4     // 屏幕RST/复位 → GPIO4

// 触摸芯片XPT2046引脚（按你的实际接线1:1配置）
#define TOUCH_CS   27  // 触摸T_CS/片选 → GPIO27
#define TOUCH_SCK  12  // 触摸T_CLK/时钟 → GPIO12
#define TOUCH_MOSI 13  // 触摸T_DIN/数据输入 → GPIO13
#define TOUCH_MISO 14  // 触摸T_DO/数据输出 → GPIO14
// #define TOUCH_IRQ  34  // 先注释，断开T_IRQ接线，排除中断干扰

// #########################################################################
// Section 3. 触摸驱动关键配置（必须添加！）
// #########################################################################
#define SUPPORT_XPT2046      // 强制启用XPT2046触摸驱动
#define SPI_TOUCH_FREQUENCY  2500000  // XPT2046固定2.5MHz，绝对不能改
#define TOUCH_ADC_FILTER     3         // 触摸采样滤波，提升稳定性
#define TOUCH_SAMPLE_TIME    10        // 采样时间，适配XPT2046

// #########################################################################
// Section 4. 其他配置（无需修改）
// #########################################################################
#define SPI_FREQUENCY  20000000       // 屏幕SPI频率20MHz
#define SPI_READ_FREQUENCY  8000000   // 屏幕读频率8MHz

// 启用常用字体
#define LOAD_GLCD
#define LOAD_FONT2
#define LOAD_FONT4
#define LOAD_FONT6
#define LOAD_FONT7
#define LOAD_FONT8
#define LOAD_GFXFF
#define SMOOTH_FONT

// 禁用HSPI端口，避免冲突
// #define USE_HSPI_PORT

