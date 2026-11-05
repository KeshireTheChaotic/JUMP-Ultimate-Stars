
undefined4 FUN_021596e0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  uint uVar3;
  
  iVar1 = FUN_02087724();
  if (iVar1 == 2) {
    return 1;
  }
  iVar1 = FUN_0215986c(param_1,param_2,0x20);
  if (iVar1 != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x1eb) != '\0') {
    FUN_0214e2f4(1 << (uint)*(byte *)(param_1 + 0x1e0));
    FUN_0214e35c(0x10);
    iVar1 = 0;
    for (uVar3 = 0; (int)uVar3 < *(int *)(DAT_02172960 + 0x158); uVar3 = uVar3 + 1) {
      if (((uint)*(ushort *)(*(int *)(*(int *)(param_1 + 0x1a8) + 0x10) + 0x16a) &
          1 << (uVar3 & 0xff)) != 0) {
        iVar1 = *(int *)(*(int *)(DAT_02172960 + uVar3 * 4 + 0xdc) + 0xb4);
        break;
      }
    }
    if (iVar1 != 0) {
      FUN_02023894(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 4),iVar1,0,uVar3,param_4);
      (**(code **)(**(int **)(*(int *)(*(int *)(param_1 + 0xb0) + 4) + 0x68) + 0x6c))();
      piVar2 = *(int **)(*(int *)(param_1 + 0xb0) + 4);
      (**(code **)(*piVar2 + 0xd8))(piVar2,1);
      FUN_02028330(*(undefined4 *)(*(int *)(param_1 + 0xb0) + 4));
    }
  }
  return 1;
}

