
void FUN_0215df18(int param_1)

{
  int iVar1;
  uint uVar2;
  bool bVar3;
  
  iVar1 = FUN_0215d4e0();
  if (iVar1 != 0) {
    iVar1 = *(int *)(*(int *)(param_1 + 0x1a0) + 0x1bc);
    if ((*(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x34) & 4) == 0) {
      if (iVar1 != 4) {
        FUN_02157450(param_1,4);
      }
      *(undefined1 *)(param_1 + 0x1e7) = 1;
    }
    else {
      if (iVar1 != 6) {
        FUN_02157450(param_1,6);
      }
      *(undefined1 *)(param_1 + 0x1e7) = 0;
    }
  }
  iVar1 = FUN_0215d904(*(undefined4 *)(param_1 + 0x1a8));
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x1e6) = 1;
    FUN_0215d2e4(param_1);
    return;
  }
  iVar1 = FUN_0215e470(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215e534(param_1);
  if (iVar1 != 0) {
    return;
  }
  if ((*(byte *)(param_1 + 0xda) < 2) && (iVar1 = FUN_02159d7c(param_1,1), iVar1 != 0)) {
    *(char *)(param_1 + 0xdb) = *(char *)(param_1 + 0xdb) + '\f';
    return;
  }
  iVar1 = FUN_0215e0cc(param_1);
  if (iVar1 != 0) {
    return;
  }
  iVar1 = FUN_0215e1d0(param_1);
  if (iVar1 != 0) {
    return;
  }
  if (((*(uint *)(param_1 + 0x128) & 8) != 0) && (iVar1 = FUN_0215d860(param_1), iVar1 != 0)) {
    return;
  }
  uVar2 = *(uint *)(*(int *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x5c) + 0x34);
  bVar3 = (uVar2 & 4) != 0;
  if (bVar3) {
    uVar2 = (uint)*(char *)(param_1 + 0x1e7);
  }
  if (bVar3 && uVar2 != 0) {
    if (uVar2 == 1) {
      FUN_02157450(param_1,5);
      *(char *)(param_1 + 0x1e7) = *(char *)(param_1 + 0x1e7) + '\x01';
    }
    else if (uVar2 == 0xc) {
      FUN_02157450(param_1,6);
      *(undefined1 *)(param_1 + 0x1e7) = 0;
    }
    else {
      *(char *)(param_1 + 0x1e7) = (char)uVar2 + '\x01';
    }
  }
  FUN_0215ef58(param_1,(int)*(short *)(param_1 + 0xb8));
  return;
}

