
undefined4 FUN_0216eef4(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff,0,param_4);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
  }
  else {
    FUN_0216f100(param_1,param_2,param_3);
  }
  return 0;
}

