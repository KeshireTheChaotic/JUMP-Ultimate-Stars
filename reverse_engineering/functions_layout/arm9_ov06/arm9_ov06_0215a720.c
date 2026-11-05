
undefined4 FUN_0215a720(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_02159990();
  if (iVar1 == 0) {
    if (*(char *)(param_1 + 0xd1) != '\0') {
      return 0xc;
    }
    iVar1 = FUN_0215a824(param_1);
    if (iVar1 == 0) {
      uVar2 = *(uint *)(param_1 + 0x6c);
      if ((uVar2 & 0x81) == 0x81) {
        return 5;
      }
      if ((uVar2 & 0x101) == 0x101) {
        return 6;
      }
      if ((uVar2 & 0x80) != 0) {
        return 1;
      }
      if ((uVar2 & 0x100) != 0) {
        return 2;
      }
    }
    else {
      if ((*(uint *)(param_1 + 0x6c) & 0x80) != 0) {
        return 3;
      }
      if ((*(uint *)(param_1 + 0x6c) & 0x100) != 0) {
        return 4;
      }
    }
  }
  if ((*(uint *)(param_1 + 0x6c) & 0x1000) != 0) {
    return 0xb;
  }
  iVar1 = FUN_02159990(param_1);
  if (iVar1 == 0) {
    if ((*(uint *)(param_1 + 0x6c) & 0x41) == 0x41) {
      return 0xe;
    }
    if ((*(uint *)(param_1 + 0x6c) & 0x40) != 0) {
      return 0xd;
    }
  }
  return 0;
}

