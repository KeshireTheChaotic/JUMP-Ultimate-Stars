
void FUN_02167e28(int param_1)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  if (*(char *)(param_1 + 3) == '\0') {
    *(undefined1 *)(param_1 + 2) = 0;
    FUN_02167d6c();
    return;
  }
  do {
    iVar1 = func_0x02176654(uVar2);
    if (iVar1 == 0) {
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | (byte)(1 << uVar2);
    }
    else {
      iVar1 = FUN_02167d54(uVar2);
      if (iVar1 == 0) {
        *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) | (byte)(1 << uVar2);
      }
    }
    uVar2 = uVar2 + 1 & 0xff;
  } while (uVar2 < 4);
  return;
}

