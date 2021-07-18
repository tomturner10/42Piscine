#!/usr/local/bin/python3

import os
import sys
import fileinput

filetosearch = sys.argv[1]

temp = open(filetosearch, 'r+')

for line in fileinput.input(filetosearch):
    temp.write( line.replace("    ", '\t' ) )
temp.close()

