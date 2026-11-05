
void FUN_02036d70(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  
  piVar1 = (int *)FUN_0203341c(param_2,0,0);
  uVar6 = 0;
  while( true ) {
    iVar4 = DAT_020a12cc;
    if (DAT_020a12d0 <= uVar6) {
      (**(code **)(**(int **)(param_1 + 100) + 0x5c))(*(int **)(param_1 + 100),piVar1);
      (**(code **)(*piVar1 + 0xc))();
      FUN_02036fac(param_1,param_2);
      return;
    }
    uVar2 = (**(code **)(*piVar1 + 0x2c))(piVar1,0);
    puVar3 = *(undefined4 **)(iVar4 + uVar6 * 4);
    iVar4 = (**(code **)*puVar3)(puVar3,uVar2);
    if (iVar4 != 0) break;
    uVar6 = uVar6 + 1;
  }
  piVar5 = *(int **)(DAT_020a12cc + uVar6 * 4);
  (**(code **)(*piVar5 + 4))(piVar5,param_1,piVar1);
  (**(code **)(*piVar1 + 0xc))();
  return;
}

