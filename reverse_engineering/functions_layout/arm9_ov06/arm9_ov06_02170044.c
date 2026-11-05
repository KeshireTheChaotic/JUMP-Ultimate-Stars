
undefined4 FUN_02170044(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff | 0x800,0,param_4);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
  }
  else {
    FUN_0216e820(iVar1,param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    FUN_0216e898(*(undefined1 *)(param_3 + 0x24),*(undefined1 *)(param_3 + 0x1c),param_1 + 0x30,
                 param_1 + 0x32);
    *(undefined4 *)(param_1 + 0x34) = *(undefined4 *)(param_3 + 4);
    *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 8);
    *(undefined2 *)(param_1 + 0x3c) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x1e);
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,1,0,0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    if ((*(uint *)(iVar1 + 0x38) & 8) == 0) {
      *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x30000;
    }
    else {
      FUN_0207d11c(iVar1,1);
      uVar2 = FUN_0216e780(param_2,param_3 + 4);
      *(undefined4 *)(param_3 + 4) = uVar2;
    }
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x100000;
  }
  return 0;
}

