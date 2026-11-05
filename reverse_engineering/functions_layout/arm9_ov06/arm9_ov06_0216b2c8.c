
undefined4 FUN_0216b2c8(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int *piVar1;
  int iVar2;
  
  *(undefined1 *)(param_1 + 0x40) = *(undefined1 *)(param_3 + 0x1d);
  *(undefined4 *)(param_1 + 0x30) =
       *(undefined4 *)(*(int *)(DAT_02172960 + *(char *)(param_3 + 0x1d) * 4 + 0xdc) + 0x1a8);
  piVar1 = (int *)FUN_0216b3d8();
  *(int **)(param_1 + 0x34) = piVar1;
  *(int *)(param_3 + 4) = *piVar1 + *(int *)(param_3 + 0xc);
  *(int *)(param_3 + 8) = *(int *)(*(int *)(param_1 + 0x34) + 4) + *(int *)(param_3 + 0x10);
  *(undefined4 *)(param_1 + 0x38) = *(undefined4 *)(param_3 + 0xc);
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_3 + 0x10);
  iVar2 = FUN_02083624(FUN_0216e3d0,param_3,*(uint *)(*(int *)(param_2 + 0x10) + 0x34) | 0x1000,
                       ~(1 << (uint)*(byte *)(param_3 + 0x1d)) & 0xffffffU | 0x18400700,0,param_4);
  *(int *)(param_1 + 0x2c) = iVar2;
  if (iVar2 == 0) {
    *(ushort *)(param_1 + 0x26) = *(ushort *)(param_1 + 0x26) | 8;
  }
  else {
    FUN_0216e820(iVar2,param_2,*(undefined4 *)(param_1 + 0x28));
    FUN_0216eb8c(*(undefined4 *)(param_1 + 0x2c),*(undefined4 *)(param_3 + 0x14));
    FUN_0216ec88(*(undefined4 *)(param_1 + 0x2c),param_1,1,0,0);
  }
  return 0;
}

