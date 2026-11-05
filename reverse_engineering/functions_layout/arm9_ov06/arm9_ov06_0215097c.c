
undefined4 FUN_0215097c(int param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  bVar1 = true;
  for (iVar4 = 1; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    iVar2 = FUN_0215b440(*(undefined4 *)(DAT_02172960 + iVar4 * 4 + 0xdc),7);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + iVar4 * 4 + 0x4c) = 1;
    }
  }
  for (iVar4 = 1; iVar4 < *(int *)(param_1 + 0x14); iVar4 = iVar4 + 1) {
    if (*(int *)(param_1 + iVar4 * 4 + 0x4c) == 0) {
      bVar1 = false;
    }
  }
  if (bVar1) {
    FUN_0215041c(param_1);
    return 1;
  }
  uVar3 = FUN_0214f9fc(param_1);
  return uVar3;
}

