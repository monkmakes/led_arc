from time import sleep
from machine import Pin
from random import randint
from neopixel import NeoPixel

NUM_LEDS = 10

pixels = NeoPixel(Pin(5), NUM_LEDS)

def clear():
    pixels.fill((0, 0, 0))
    pixels.write()
    
def randomize():
    clear()
    for i in range(NUM_LEDS):
        pixels[i] = (randint(0, 50), randint(0, 50), randint(0, 50))
        pixels.write()
        sleep(0.1)
    
randomize()