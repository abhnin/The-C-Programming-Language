# -*- coding: utf-8 -*-
"""
Created on Fri Dec  2 19:17:49 2016

@author: abhnin
"""

import glob

lines = 0

for filename in glob.glob('*.c'):
    f = open(filename, 'r')
    for line in f:
        lines += 1
    f.close()
    
print (lines)