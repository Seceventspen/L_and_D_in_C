#!/usr/bin/env python3

import sys

if __name__ == "__main__":
    if len(sys.argv) < 2:
        print("usage: %s file.bin\n" % (sys.argv[0],))
        sys.exit(0)

    shellcode = "\""
    ctr = 1
    maxlen = 15

    with open(sys.argv[1], "rb") as file:
        for b in file.read():
            shellcode += "\\x" + format(b, '02x')
            if ctr == maxlen:
                shellcode += "\" \n\""
                ctr = 0
            ctr += 1
    shellcode += "\""
    print(shellcode)
