
undefined4 FUN_0216d05c(int param_1)

{
  short sVar1;
  undefined4 uVar2;
  int iVar3;
  
  uVar2 = FUN_0216d1cc();
  iVar3 = (uint)*(ushort *)(param_1 + 0x20) * *(int *)(param_1 + 0x34);
  if (iVar3 < 0) {
    iVar3 = -iVar3;
  }
  sVar1 = FUN_0200d12c((int)*(short *)(param_1 + 0x58) << 8,iVar3 >> 8);
  *(short *)(param_1 + 0x62) = sVar1 + 1;
  sVar1 = FUN_0200d12c(*(int *)(param_1 + 0x38) << 1,*(undefined2 *)(param_1 + 0x62));
  *(short *)(param_1 + 0x5c) = -sVar1;
  *(undefined2 *)(param_1 + 0x5a) = 0;
  *(undefined2 *)(param_1 + 0x48) = 0x100;
  *(undefined2 *)(param_1 + 0x4a) = 0;
  return uVar2;
}

