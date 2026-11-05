
void FUN_020808c0(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_3 + 0xc);
  iVar1 = *(int *)(*(int *)(param_3 + 8) + 0x1c);
  iVar3 = *(int *)(iVar4 + 0x1c);
  if (((*(uint *)(param_2 + 0x40) & 0x4000) != 0) || ((*(uint *)(iVar3 + 0x14) & 0x4000000) != 0)) {
    if ((*(uint *)(iVar3 + 0x18) & 1) != 0) {
      *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) & 0xfd;
    }
    *(ushort *)(iVar1 + 0x20) = *(ushort *)(iVar1 + 0x20) | (ushort)*(undefined4 *)(iVar3 + 0x14);
    iVar1 = *(int *)(param_1 + 0xd8);
    FUN_02037c24(param_1 + 0xd8,iVar1);
    *(int *)(iVar1 + 8) = param_3;
    FUN_02037b98(param_1 + 0x40,iVar1);
    return;
  }
  if (((*(uint *)(iVar3 + 0x14) & 0x100) != 0) && ((*(uint *)(iVar3 + 0x1c) & 0x40000000) != 0)) {
    return;
  }
  if ((*(uint *)(iVar3 + 0x18) & 1) != 0) {
    *(byte *)(iVar4 + 0x18) = *(byte *)(iVar4 + 0x18) | 2;
  }
  *(ushort *)(iVar1 + 0x22) = *(ushort *)(iVar1 + 0x22) | (ushort)*(undefined4 *)(iVar3 + 0x14);
  iVar1 = *(int *)(iVar1 + 0xc);
  if ((*(uint *)(iVar3 + 0x14) & 0x100) == 0) {
    uVar2 = *(uint *)(iVar1 + 0x44) | 0x200000;
  }
  else {
    uVar2 = *(uint *)(iVar1 + 0x44) | 0x100000;
  }
  *(uint *)(iVar1 + 0x44) = uVar2;
  iVar1 = *(int *)(param_1 + 0xd8);
  FUN_02037c24(param_1 + 0xd8,iVar1);
  *(int *)(iVar1 + 8) = param_3;
  FUN_02037b98(param_1 + 0x38,iVar1);
  return;
}

