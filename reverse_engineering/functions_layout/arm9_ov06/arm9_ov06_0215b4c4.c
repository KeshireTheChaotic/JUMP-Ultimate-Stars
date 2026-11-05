
void FUN_0215b4c4(int param_1,char param_2)

{
  *(char *)(param_1 + 0x115) = *(char *)(param_1 + 0x115) + param_2;
  if (*(char *)(param_1 + 0x115) < '\x10') {
    *(undefined1 *)(param_1 + 0x115) = 0x10;
  }
  if ('<' < *(char *)(param_1 + 0x115)) {
    *(undefined1 *)(param_1 + 0x115) = 0x3c;
  }
  return;
}

