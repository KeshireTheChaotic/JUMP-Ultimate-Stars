
int * FUN_020439e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int **)(param_1 + 0x20) == (int *)0x0) {
    return (int *)0x0;
  }
  if ((param_2 != 0) &&
     (iVar1 = (**(code **)(**(int **)(param_1 + 0x20) + 0x20))(), param_2 != iVar1)) {
    piVar2 = (int *)FUN_02016708(param_2,*(undefined4 *)(param_1 + 0x20));
    if (param_3 == DAT_02093bf4) {
      return piVar2;
    }
    iVar1 = jus_AllocDebug(0x2c);
    piVar3 = (int *)0x0;
    if (iVar1 != 0) {
      piVar3 = (int *)jus_Class_02096c70::jus_Class_02096c70(iVar1,piVar2,param_3);
    }
    (**(code **)(*piVar2 + 0xc))();
    return piVar3;
  }
  if (param_3 == DAT_02093bf4) {
    (**(code **)(**(int **)(param_1 + 0x20) + 8))();
    return *(int **)(param_1 + 0x20);
  }
  uVar4 = *(undefined4 *)(param_1 + 0x20);
  iVar1 = jus_AllocDebug(0x2c);
  if (iVar1 == 0) {
    return (int *)0x0;
  }
  piVar2 = (int *)jus_Class_02096c70::jus_Class_02096c70(iVar1,uVar4,param_3);
  return piVar2;
}

