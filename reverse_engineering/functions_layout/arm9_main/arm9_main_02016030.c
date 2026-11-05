
int FUN_02016030(int *param_1,undefined4 param_2)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  piVar1 = (int *)FUN_0203341c(param_2,0,0);
  uVar2 = FUN_02010990(0,piVar1);
  (**(code **)(*piVar1 + 0xc))();
  iVar3 = FUN_02011b38(uVar2);
  iVar3 = *(int *)(iVar3 + 4);
  (**(code **)(**(int **)(iVar3 + 0x50) + 0xc))();
  uVar2 = (**(code **)(*(int *)param_1[0x14] + 0x10))();
  *(undefined4 *)(iVar3 + 0x50) = uVar2;
  (**(code **)(*param_1 + 0xb4))(param_1,iVar3);
  return iVar3;
}

