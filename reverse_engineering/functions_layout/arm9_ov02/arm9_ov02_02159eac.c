
void FUN_02159eac(int param_1)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  bool bVar6;
  
  uVar4 = *(undefined4 *)(param_1 + 0x348);
  uVar5 = 0;
  do {
    uVar1 = (uint)*(byte *)(param_1 + 0x4da);
    bVar6 = (uVar1 & 1 << (uVar5 & 0xff)) != 0;
    if (bVar6) {
      uVar1 = *(uint *)(param_1 + uVar5 * 4 + 0x1c0);
    }
    if (bVar6 && uVar1 != 0) {
      FUN_0214d678(uVar1,uVar4);
    }
    uVar5 = uVar5 + 1;
  } while ((int)uVar5 < 4);
  if ((*(byte *)(param_1 + 0x4da) & 0x10) == 0) {
    return;
  }
  iVar3 = 0;
  do {
    iVar2 = *(int *)(param_1 + iVar3 * 4 + 0x1d0);
    if (iVar2 != 0) {
      FUN_0214d678(iVar2,uVar4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 10);
  return;
}

