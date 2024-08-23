################
### rules.mk ###
################


##General Keyboard Setup
VIA_ENABLE = yes
LTO_ENABLE = yes
WPM_ENABLE = no
RGBLIGHT_ENABLE = no

##DIP Switch Setup (2 state switch)
DIP_SWITCH_ENABLE = yes
#DIP_SWITCH_MAP_ENABLE = yes

##I2C Setup
I2C_DRIVER = I2CD0
I2C1_SDA_PIN = GP12
I2C1_SCL_PIN = GP13

##OLED Setup
OLED_ENABLE = yes
OLED_DRIVER_ENABLE = yes
OLED_DRIVER = ssd1306
OLED_TRANSPORT = i2c

##HID Communication with Host
RAW_ENABLE = yes
