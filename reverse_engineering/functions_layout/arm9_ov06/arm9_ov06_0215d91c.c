
void FUN_0215d91c(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    FUN_02157450(param_1,2);
    iVar1 = FUN_0215d904(*(undefined4 *)(param_1 + 0x1a8));
    if (iVar1 == 0) {
      *(char *)(param_1 + 0xda) = *(char *)(param_1 + 0xda) + '\x01';
      *(char *)(param_1 + 0xd9) = *(char *)(param_1 + 0xd9) + '\x01';
      iVar1 = *(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c);
      *(uint *)(iVar1 + 0x34) = *(uint *)(iVar1 + 0x34) | 2;
    }
    iVar1 = *(int *)(param_1 + 0x1a4);
    if (iVar1 == 0) {
      return;
    }
    if (*(short *)(iVar1 + 0x3c) != -1) {
      *(short *)(iVar1 + 0x3c) = *(short *)(iVar1 + 0x3c) + 1;
    }
    return;
  }
  iVar1 = FUN_0215d904(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 == 0) {
    if ((*(byte *)(param_1 + 0xda) < 2) && (iVar1 = FUN_02159d7c(param_1,1), iVar1 != 0)) {
      *(char *)(param_1 + 0xdb) = *(char *)(param_1 + 0xdb) + '\f';
      return;
    }
  }
  else {
    iVar1 = FUN_02159d7c(param_1,2);
    if (iVar1 != 0) {
      return;
    }
    iVar1 = FUN_02159d7c(param_1,0);
    if (iVar1 != 0) {
      return;
    }
  }
  iVar1 = FUN_02155620(*(undefined4 *)(*(int *)(param_1 + 0x1a8) + 0x18));
  if (iVar1 == 0) {
    return;
  }
  iVar1 = FUN_0215dec8(param_1);
  if (iVar1 == 0) {
    FUN_0215d2e4(param_1);
    return;
  }
  return;
}

