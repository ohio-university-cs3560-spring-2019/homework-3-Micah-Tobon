#!/bin/bash

wc * > outs.txt

python3 hw5.py

rm outs.txt
