
undefined4 FUN_0202b6ec(int param_1,int param_2)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(param_1 + 0x70);
  if ((iVar4 == 0) ||
     (iVar3 = *(int *)(param_1 + (iVar4 + -1) * 4 + 0x50),
     param_2 != *(int *)(*(int *)(iVar3 + 4) + 0x14))) {
    if (iVar4 != 0) {
      (**(code **)(**(int **)(*(int *)(param_1 + (iVar4 + -1) * 4 + 0x50) + 4) + 0x4c))();
    }
    if (*(int *)(param_1 + 0x20) == DAT_020a1054) {
      (**(code **)(*DAT_020a0fac + 8))(DAT_020a0fac,*(undefined4 *)(param_1 + 0x7c),1,0,0);
      uVar1 = FUN_0202b4f8();
    }
    else {
      (**(code **)(*DAT_020a0fac + 0xc))
                (DAT_020a0fac,*(undefined4 *)(param_1 + 0x7c),1,*(int *)(param_1 + 0x20),0,0,0);
      uVar1 = FUN_0202b4f8();
    }
    *(undefined4 *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x50) = uVar1;
    (**(code **)(**(int **)(*(int *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x50) + 4) + 0x48))();
    piVar2 = *(int **)(*(int *)(param_1 + *(int *)(param_1 + 0x70) * 4 + 0x50) + 4);
    (**(code **)(*piVar2 + 0x50))(piVar2,param_2);
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  else {
    (**(code **)(**(int **)(iVar3 + 4) + 0x48))();
    piVar2 = *(int **)(*(int *)(param_1 + (*(int *)(param_1 + 0x70) + -1) * 4 + 0x50) + 4);
    (**(code **)(*piVar2 + 0x50))(piVar2,param_2);
  }
  return *(undefined4 *)(param_1 + (*(int *)(param_1 + 0x70) + -1) * 4 + 0x50);
}

