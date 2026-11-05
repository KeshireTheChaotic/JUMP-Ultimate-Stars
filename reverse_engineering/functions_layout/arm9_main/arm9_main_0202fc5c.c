
undefined4 FUN_0202fc5c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  uVar1 = (uint)*(ushort *)(param_1 + 10);
  do {
    uVar1 = uVar1 - 1;
    if ((int)uVar1 < 0) {
      pcVar4 = *(code **)(**(int **)(param_1 + 0xc) + 0x20);
      uVar3 = (*pcVar4)(*(int **)(param_1 + 0xc),param_2,param_3,pcVar4,param_4);
      return uVar3;
    }
    uVar3 = (**(code **)(**(int **)(*(int *)(param_1 + 0x10) + uVar1 * 4) + 0x84))();
    iVar2 = FUN_02004c2c(param_2,uVar3);
  } while (iVar2 != 0);
  return *(undefined4 *)(*(int *)(param_1 + 0x10) + uVar1 * 4);
}

