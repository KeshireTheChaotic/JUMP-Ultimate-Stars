
void FUN_02014cc4(int param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  bool bVar4;
  bool bVar5;
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x38) + 0x44);
  if (iVar3 == 0) {
    uVar1 = 1;
    uVar2 = uVar1;
  }
  else {
    uVar1 = FUN_02014d6c(*(undefined4 *)(iVar3 + 100));
    uVar2 = (uint)*(byte *)(*(int *)(iVar3 + 100) + 0x10);
    if (((uVar2 & 0x3f) >> 5 == 0) || ((uVar2 & 7) >> 2 == 0)) {
      uVar2 = 0;
    }
    else {
      uVar2 = 1;
    }
  }
  bVar4 = uVar1 != (*(byte *)(param_1 + 0x10) & 3) >> 1;
  if (bVar4) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | (byte)((uVar1 & 1) << 1);
  }
  bVar5 = uVar2 != (*(byte *)(param_1 + 0x10) & 7) >> 2;
  if (bVar5) {
    *(byte *)(param_1 + 0x10) = *(byte *)(param_1 + 0x10) & 0xfd | (byte)(uVar2 << 1);
  }
  if (bVar5 || bVar4) {
    FUN_02014ae0(param_1);
    return;
  }
  return;
}

