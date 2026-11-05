
undefined4 FUN_020809c8(int param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(*(int *)(param_3 + 0xc) + 0x1c);
  iVar4 = *(int *)(*(int *)(param_3 + 8) + 0x1c);
  uVar2 = *(uint *)(iVar4 + 0x14);
  if (((*(ushort *)(iVar5 + 0x20) & uVar2 & 0xff) != 0) ||
     ((*(ushort *)(iVar5 + 0x24) & uVar2 & 0xff) != 0)) {
    return 0;
  }
  uVar1 = *(uint *)(*(int *)(iVar4 + 0xc) + 0x40);
  if (((uVar1 & 0x10000000) != 0) && ((*(uint *)(iVar5 + 0x14) & 0x100) != 0)) {
    uVar3 = *(uint *)(iVar5 + 0x18);
    bVar7 = (uVar3 & 0x800) != 0;
    if (bVar7) {
      uVar3 = (uint)*(byte *)(*(int *)(iVar5 + 0x10) + 1);
    }
    if (bVar7 && uVar3 != 0) {
      return 0;
    }
  }
  if ((uVar2 & 0x20000000) == 0) {
    if (((uVar2 & 0x10000000) != 0) && ((*(uint *)(iVar5 + 0x1c) & 0x10000000) != 0)) {
      return 0;
    }
    *(ushort *)(iVar4 + 0x20) = *(ushort *)(iVar4 + 0x20) | (ushort)*(undefined4 *)(iVar5 + 0x14);
    if (((*(uint *)(iVar4 + 0x14) & 0xb0000) != 0) || ((*(uint *)(iVar5 + 0x14) & 0xb0000) != 0)) {
      return 0;
    }
    iVar6 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar6);
    *(int *)(iVar6 + 8) = param_3;
    FUN_02037b98(param_1 + 0x68,iVar6);
    if (((*(uint *)(iVar4 + 0x18) & 1) != 0) &&
       (((*(uint *)(iVar5 + 0x14) & 0x300) == 0 ||
        (**(char **)(iVar4 + 0x10) != '\x03' && **(char **)(iVar4 + 0x10) != '\x04')))) {
      *(byte *)(*(int *)(param_3 + 8) + 0x18) = *(byte *)(*(int *)(param_3 + 8) + 0x18) | 2;
    }
  }
  else {
    if ((uVar2 & 0xf & *(uint *)(iVar5 + 0x1c)) != 0) {
      return 0;
    }
    if ((*(uint *)(iVar5 + 0x14) & 0x100) == 0) {
      if ((uVar1 & 0x10000080) != 0) {
        return 0;
      }
      if (((*(uint *)(iVar5 + 0x18) & 0x20000) != 0) && ((uVar2 & 0x700) != 0)) {
        return 0;
      }
      iVar6 = *(int *)(param_1 + 0xd8);
      FUN_02037c24(param_1 + 0xd8,iVar6);
      *(int *)(iVar6 + 8) = param_3;
      FUN_02037b98(param_1 + 0x30,iVar6);
      if (((*(uint *)(iVar4 + 0x18) & 1) != 0) &&
         (((*(uint *)(iVar4 + 0x14) & 0x100) == 0 || ((*(uint *)(iVar5 + 0x14) & 0x4000000) == 0))))
      {
        *(byte *)(*(int *)(param_3 + 8) + 0x18) = *(byte *)(*(int *)(param_3 + 8) + 0x18) | 2;
      }
      if (((*(uint *)(iVar5 + 0x18) & 1) != 0) &&
         (((*(uint *)(iVar4 + 0x14) & 0x300) == 0 ||
          (**(char **)(iVar5 + 0x10) != '\x03' && **(char **)(iVar5 + 0x10) != '\x04')))) {
        *(byte *)(*(int *)(param_3 + 0xc) + 0x18) = *(byte *)(*(int *)(param_3 + 0xc) + 0x18) | 2;
      }
      return 1;
    }
    if (((((uVar2 & 0x100) == 0) && ((uVar2 & 0x200) == 0)) && ((uVar2 & 0x400) == 0)) &&
       ((uVar2 & 0xf0) == 0)) {
      iVar4 = *(int *)(param_1 + 0xd8);
      FUN_02037c24(param_1 + 0xd8,iVar4);
      *(int *)(iVar4 + 8) = param_3;
      FUN_02037b98(param_1 + 0x48,iVar4);
    }
  }
  return 0;
}

