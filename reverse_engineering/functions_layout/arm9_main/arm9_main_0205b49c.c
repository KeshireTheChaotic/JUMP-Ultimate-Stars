
void FUN_0205b49c(int param_1,int param_2)

{
  if (param_1 == 0) {
    return;
  }
  if (*(char *)(param_1 + 0x2c) == '\0') {
    return;
  }
  if (param_2 == 0) {
    FUN_0205b2d8();
    return;
  }
  FUN_0205e090(param_1 + 0x1c,0);
  FUN_0205b128(param_1,0);
  *(undefined1 *)(param_1 + 0x2c) = 2;
  return;
}

