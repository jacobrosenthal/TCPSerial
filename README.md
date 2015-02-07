#TCPSerial

Turns Arduino TCP Server objects into Stream Objects. Arduino TCP Servers have all the expected .write and .print functions as a Stream object, which multicasts your your data to all clients. But its not a Stream object, and you can't hand it off to classes looking for a Stream Object. Now you can. Any .reads, .available, .peeks return -1, false, etc.

##Install
As usual, download zip, unzip and rename to remove the dash character and place in your Arduino Libraries folder, on MacOSX ~/Documents/Arduino/libraries/

##Use
Create a Stream object from a Server.
```cpp
EthernetServer server = EthernetServer(23);
TCPSerial tcpserial(server);
```

Now everything write or print on it like any other stream object.
```cpp
tcpserial.write('a');
```
