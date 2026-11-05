
undefined4 FUN_02196128(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  iVar5 = *(int *)(param_1 + 0x818);
  if (0 < iVar5) {
    puVar2 = *(undefined4 **)(param_1 + 0x814);
    puVar3 = puVar2;
    do {
      iVar1 = FUN_02004c2c(*(undefined4 *)*puVar3,param_2);
      if (iVar1 == 0) {
        return puVar2[iVar4];
      }
      puVar3 = puVar3 + 1;
      iVar4 = iVar4 + 1;
    } while (iVar4 < iVar5);
  }
  return 0;
}

