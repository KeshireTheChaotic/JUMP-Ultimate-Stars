
bool FUN_0217e3b0(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0x7e) != '\0') {
    return false;
  }
  iVar1 = FUN_0217e3f4(*(undefined4 *)(param_1 + 0x2c),*(char *)(param_1 + 0x104) + '\x01');
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0x7e) = 0x1e;
  }
  return iVar1 != 0;
}

