int incrementBuf(int *buf, int size) {
  for (i = 0; i < size; i++)
    if (buf[i] > 0)
      buf[i]++;
}

int main(int argc, char** argv) {
  int[32] buf;
  memset(buf, 1, 32);

  incrementBuf(buf);
}
