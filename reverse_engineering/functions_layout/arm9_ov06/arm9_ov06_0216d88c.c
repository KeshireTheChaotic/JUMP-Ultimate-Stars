
undefined4 FUN_0216d88c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_0216e9d0(param_2);
  *(int *)(param_1 + 0x34) = iVar1;
  if (iVar1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)(iVar1 + 0x10) + 0x5c) + 0xc;
  }
  *(int *)(param_1 + 0x30) = iVar1;
  iVar1 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff | 0x800,0,param_4);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
  }
  else {
    FUN_0216e898(*(undefined1 *)(param_3 + 0x24),*(undefined1 *)(param_3 + 0x1c),param_1 + 0x38,
                 param_1 + 0x3a);
    FUN_0216e820(*(undefined4 *)(param_1 + 0x2c),param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,1,0,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x30000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x100000;
  }
  return 0;
}

