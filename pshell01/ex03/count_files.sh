#! /bin/bash

find . | wc -l | sed 's/[\t]//g' | sed 's/[ ]//g'
