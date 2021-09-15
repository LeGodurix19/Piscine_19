#!/bin/bash

find . -name "*.sh" | xargs -n 1 basename | sed 's/\.sh//g'
