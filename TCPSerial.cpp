#include <TCPSerial.h>

TCPSerial::TCPSerial(EthernetServer &_server){
  this->server = &_server;
}

int TCPSerial::available() {
  return 0;
}

int TCPSerial::peek() 
{
  return -1;
}

void TCPSerial::flush(){}

int TCPSerial::read() {
  return -1;
}

size_t TCPSerial::write(uint8_t c)
{
  return server->write(c);
}

size_t TCPSerial::write(const char *str) {
  if (str == NULL) return 0;
  return server->write((const uint8_t *)str, strlen(str));
}

size_t TCPSerial::write(const char *buffer, size_t size) {
  return server->write((const uint8_t *)buffer, size);
}

size_t TCPSerial::write(const uint8_t *buffer, size_t size)
{
  size_t n = 0;
  while (size--) {
    n += server->write(*buffer++);
  }
  return n;
}

size_t TCPSerial::print(const __FlashStringHelper *ifsh)
{
  return server->print(ifsh);
}

size_t TCPSerial::print(const String &s)
{
  return server->print(s);
}

size_t TCPSerial::print(const char str[])
{
  return server->print(str);
}

size_t TCPSerial::print(char c)
{
  return server->print(c);
}

size_t TCPSerial::print(unsigned char b, int base)
{
  return server->print(b, base);
}

size_t TCPSerial::print(int n, int base)
{
  return server->print(n, base);
}

size_t TCPSerial::print(unsigned int n, int base)
{
  return server->print(n, base);
}

size_t TCPSerial::print(long n, int base)
{
  return server->print(n, base);
}

size_t TCPSerial::print(unsigned long n, int base)
{
  return server->print(n, base);
}

size_t TCPSerial::print(double n, int digits)
{
  return server->print(n, digits);
}

size_t TCPSerial::println(const __FlashStringHelper *ifsh)
{
  return server->println(ifsh);
}

size_t TCPSerial::print(const Printable& x)
{
  return server->print(x);
}

size_t TCPSerial::println(void)
{
  return server->println();
}

size_t TCPSerial::println(const String &s)
{
  return server->println(s);
}

size_t TCPSerial::println(const char c[])
{
  return server->println(c);
}

size_t TCPSerial::println(char c)
{
  return server->println(c);
}

size_t TCPSerial::println(unsigned char b, int base)
{
  return server->println(b, base);
}

size_t TCPSerial::println(int num, int base)
{
  return server->println(num, base);
}

size_t TCPSerial::println(unsigned int num, int base)
{
  return server->println(num, base);
}

size_t TCPSerial::println(long num, int base)
{
  return server->println(num, base);
}

size_t TCPSerial::println(unsigned long num, int base)
{
  return server->println(num, base);
}

size_t TCPSerial::println(double num, int digits)
{
  return server->println(num, digits);
}

size_t TCPSerial::println(const Printable& x)
{
  return server->println(x);
}