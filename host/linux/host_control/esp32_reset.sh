insmod esp32_sdio.ko
sleep 5
cd /sys/class/gpio
echo 150 > export   # the pin should connect to esp32 reset pin
cd gpio150
echo out > direction
sleep 1
echo 1 > value

cd ~
mknod /dev/esps0 c 221 0
chmod 666 /dev/esps0
