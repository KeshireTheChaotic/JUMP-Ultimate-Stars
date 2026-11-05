
int FUN_0216e9d0(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  
  iVar6 = 0;
  uVar8 = *(uint *)(*(int *)(param_1 + 0x10) + 0x34);
  uVar7 = 0xffffffff;
  if ((uVar8 & 0xf0) != 0) {
    uVar8 = uVar8 | (uVar8 & 0xf0) >> 4;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x10) + 0x5c);
  puVar2 = (undefined4 *)FUN_0208369c(9);
  for (; puVar2 != (undefined4 *)0x0; puVar2 = (undefined4 *)*puVar2) {
    iVar3 = puVar2[2];
    if (((((*(uint *)(iVar3 + 0x2c) & 1) == 0) && ((*(uint *)(iVar3 + 0x2c) & 8) == 0)) &&
        (iVar9 = *(int *)(iVar3 + 0x10), *(int *)(iVar9 + 0x17c) != 0)) &&
       ((uVar4 = *(uint *)(iVar9 + 0x34) & 0xf, uVar4 != 0 && (uVar8 & 0xf) != uVar4 &&
        (iVar1 = *(int *)(*(int *)(iVar9 + 0x5c) + 0x10) - *(int *)(iVar5 + 0x10) >> 8,
        iVar9 = *(int *)(*(int *)(iVar9 + 0x5c) + 0xc) - *(int *)(iVar5 + 0xc) >> 8,
        uVar4 = iVar9 * iVar9 + iVar1 * iVar1, uVar4 < uVar7)))) {
      iVar6 = iVar3;
      uVar7 = uVar4;
    }
  }
  return iVar6;
}

