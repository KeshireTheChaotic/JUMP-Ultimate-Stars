
int FUN_0216d1cc(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_1c;
  int local_18;
  int local_14;
  
  iVar1 = FUN_02083624(FUN_0216e3d0,param_3,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x34) & 0xffff | 0x1000,
                       *(uint *)(*(int *)(param_2 + 0x10) + 0x3c) & 0xffff | 0x800,0);
  *(int *)(param_1 + 0x2c) = iVar1;
  if (iVar1 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
    param_1 = 0;
  }
  else {
    FUN_0216e820(iVar1,param_2,*(undefined4 *)(param_1 + 0x28));
    if (*(char *)(param_3 + 0x1c) == '\0') {
      FUN_0216d3b0(&local_18,(uint)*(byte *)(param_3 + 0x24) << 8);
      *(short *)(param_1 + 0x44) = (short)*(undefined4 *)(param_3 + 0xc);
    }
    else {
      FUN_0216d3b0(&local_14,(uint)*(byte *)(param_3 + 0x24) << 8);
      *(short *)(param_1 + 0x44) = -(short)*(undefined4 *)(param_3 + 0xc);
      local_18 = -local_14;
    }
    *(int *)(param_1 + 0x34) = local_18 >> 4;
    FUN_0216d404(&local_1c,(uint)*(byte *)(param_3 + 0x24) << 8);
    uVar2 = FUN_0200c954(local_1c);
    FUN_0200c5ac(uVar2,0x45800000);
    FUN_0200c85c();
    FUN_02009c54();
    uVar2 = FUN_0200b6c4();
    FUN_0200c9e4(0x45800000,uVar2);
    iVar1 = FUN_0200c8e0();
    *(int *)(param_1 + 0x38) = iVar1 >> 4;
    *(int *)(param_1 + 0x30) = param_2;
    *(undefined2 *)(param_1 + 0x58) = *(undefined2 *)(*(int *)(param_1 + 8) + 0x1e);
    FUN_02166a1c(param_1 + 0x3c,param_3 + 4);
    *(undefined2 *)(param_1 + 0x5e) = 0;
    *(short *)(param_1 + 0x46) = (short)*(undefined4 *)(param_3 + 0x10);
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 2;
    *(code **)(param_1 + 0x54) = FUN_0216d4e8;
    if ((*(uint *)(*(int *)(param_1 + 8) + 8) & 0x100) != 0) {
      *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 0x10;
    }
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,1,0,
                 (*(uint *)(*(int *)(param_1 + 8) + 8) & 0x100) != 0);
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x30000;
    iVar1 = *(int *)(*(int *)(param_1 + 0x2c) + 0x10);
    *(uint *)(iVar1 + 0x78) = *(uint *)(iVar1 + 0x78) | 0x100000;
  }
  return param_1;
}

