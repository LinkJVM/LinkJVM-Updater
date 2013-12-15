#!/bin/sh
cd /tmp
echo "Fetching latest LinkJVM package..."
wget http://files.mklein.co.at/LinkJVM/packages/latest.ipk
echo "Installing latest LinkJVM package..."
opkg upgrade latest.ipk
echo "Done."
