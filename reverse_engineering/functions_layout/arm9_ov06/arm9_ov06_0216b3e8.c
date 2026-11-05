
undefined4 FUN_0216b3e8(int param_1)

{
  uint uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  
  uVar1 = *(uint *)(*(int *)(param_1 + 8) + 8);
  bVar8 = (uVar1 & 0x200) != 0;
  if (bVar8) {
    uVar1 = *(uint *)(param_1 + 0x30);
  }
  if (bVar8 && uVar1 != 0) {
    if ((*(uint *)(uVar1 + 0x2c) & 1) == 0) {
      iVar5 = **(int **)(param_1 + 0x34);
      iVar7 = (*(int **)(param_1 + 0x34))[1];
      iVar3 = *(int *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x5c);
      iVar4 = *(int *)(param_1 + 0x38);
      iVar6 = *(int *)(param_1 + 0x3c);
      *(undefined4 *)(iVar3 + 0x14) = *(undefined4 *)(iVar3 + 0xc);
      *(undefined4 *)(iVar3 + 0x18) = *(undefined4 *)(iVar3 + 0x10);
      *(int *)(iVar3 + 0xc) = iVar5 + iVar4;
      *(int *)(iVar3 + 0x10) = iVar7 + iVar6;
    }
    else {
      *(undefined4 *)(param_1 + 0x30) = 0;
    }
  }
  iVar3 = FUN_0216ed30(*(undefined4 *)(param_1 + 0x2c));
  if (iVar3 != 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x80;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x2c) + 0x2c) & 8) != 0) {
    return 0;
  }
  puVar2 = (undefined4 *)FUN_0216b3d8(*(int *)(param_1 + 0x2c));
  iVar3 = FUN_020836fc(*puVar2,puVar2[1]);
  if ((iVar3 == 7) ||
     ((*(uint *)(*(int *)(*(int *)(param_1 + 0x2c) + 0x10) + 0x78) & 0x400000) != 0)) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x200;
    return 0;
  }
  return 1;
}

