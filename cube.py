#!/usr/bin/env python3

def cb(x):
  result = x * x * x
  return result

for i in range(19):
  if((i % 2) == 1):
    print(cb(i))
  else:
    print(i)
