
undefined4 FUN_0201c660(int *param_1,undefined4 param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  piVar1 = (int *)FUN_02011b38(param_2);
  piVar2 = (int *)(**(code **)(*param_1 + 0xd0))();
  if (piVar2 != (int *)0x0) {
    uVar3 = (**(code **)(*piVar2 + 0x1c))();
    for (uVar5 = 0; uVar5 < uVar3; uVar5 = uVar5 + 1) {
      iVar4 = (**(code **)(*piVar2 + 0x20))(piVar2,uVar5);
      if (param_3 == iVar4) {
        (**(code **)(*piVar1 + 0x38))();
        (**(code **)(*param_1 + 0xd8))(param_1,uVar5);
        (**(code **)(*piVar1 + 0x3c))();
        return 1;
      }
    }
  }
  return 0;
}

