#!/bin/sh

ROOT_PWD=$(dirname $(dirname "$0"))

cd "$ROOT_PWD"

if [ -d patches ] ; then
	for patch in patches/*.diff ; do
		git apply "$patch" || exit 1
	done
fi

cp -f cfg/blocks.h blocks.h 2>/dev/null

sudo make clean install

make clean
rm blocks.h
