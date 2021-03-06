#!/usr/bin/python

import socket
import hashlib

HOST = '127.0.0.1'
PORT = 9999


def tcpc_rx_tx(size=64):
    # tx_data_md5 = hashlib.md5()
    # tx_data_md5.update(tx_data)
    tcpc = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    # c.settimeout(1)
    tcpc.connect((HOST, PORT))
    tx_size = 1
    while tx_size <= size:
        tx_data = '0' * tx_size
        tcpc.sendall(tx_data.encode())
        rx_data = tcpc.recv(4096)
        print("tcpc | rx: %d | %s | tx: %d | %s" % (len(rx_data), set(rx_data.decode('utf-8')), len(tx_data), set(tx_data)))
        tx_size += 1
    tcpc.close()


tcpc_rx_tx(2000)
