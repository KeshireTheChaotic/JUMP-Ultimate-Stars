
void FUN_021530d4(int param_1)

{
  int iVar1;
  
  if (*(char *)(param_1 + 0xd4) == '\0') {
    *(undefined1 *)(param_1 + 0xbc) = 1;
    return;
  }
  FUN_02087214(0x2f2f,&DAT_021603f0,2);
  iVar1 = FUN_020876f8();
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0xbc) = 1;
  }
  return;
}

