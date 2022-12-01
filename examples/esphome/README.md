# ESP Home example firmware

## Setup instructions

Up until (approx) 21st of December 2022 the ESP32-S3 Devkit Board C1 is not supported by the standard ESPHome version so please do the following:

1. Setup a venv in the esphome samples directory 
2. Activate the environment 
3. Install the development version of esphome

```bash
python3 -m venv esphome-dev
source esphome-dev/bin/activate
esphome-dev/bin/python3 -m pip install --upgrade pip
pip3 install https://github.com/esphome/esphome/archive/dev.zip
```
