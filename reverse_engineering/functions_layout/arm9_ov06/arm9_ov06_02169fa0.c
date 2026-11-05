
undefined4 FUN_02169fa0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = *(int *)(param_1 + 8);
  iVar5 = *(int *)(*(int *)(iVar4 + 0x10) + 0x5c);
  uVar3 = 0;
  iVar1 = FUN_0200d12c(*(int *)(*(int *)(*(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x1a8) + 0x10)
                                        + 0x5c) + 0xc) - *(int *)(iVar5 + 0xc),0xc);
  iVar2 = iVar1;
  if (iVar1 < 0) {
    iVar2 = -iVar1;
  }
  if (iVar2 < 0x100) {
    *(undefined2 *)(iVar5 + 0x24) = 0;
  }
  else {
    if (iVar1 < 0x21) {
      if (iVar1 < -0x20) {
        iVar1 = -0x20;
      }
    }
    else {
      iVar1 = 0x20;
    }
    if (iVar1 < 0) {
      FUN_02083950(iVar4,1);
    }
    else if (0 < iVar1) {
      FUN_02083950(iVar4,0);
    }
    uVar3 = 1;
    *(short *)(*(int *)(*(int *)(*(int *)(param_1 + 8) + 0x10) + 0x5c) + 0x2c) = (short)iVar1;
  }
  return uVar3;
}

