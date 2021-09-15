#!/bin/bash

resultat=$(git status -s --ignored | awk '/!!/ {print $2}')
printf '%s\n' "$resultat"