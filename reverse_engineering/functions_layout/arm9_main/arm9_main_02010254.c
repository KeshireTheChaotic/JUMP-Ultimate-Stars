
undefined4 FUN_02010254(int param_1,undefined4 param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  (**(code **)(**(int **)(param_1 + 8) + 0xc))();
  piVar1 = (int *)FUN_020325d0(&DAT_020a1de0,param_2);
  if (piVar1 != (int *)0x0) {
    *(int **)(param_1 + 8) = piVar1;
    (**(code **)(*piVar1 + 8))();
    return 1;
  }
  iVar2 = FUN_020334a4(param_2,&DAT_02093bec,1,param_3);
  if (iVar2 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = FUN_0200fac4();
  }
  if (iVar2 == 0) {
    return 0;
  }
  iVar3 = FUN_020102dc(param_1,iVar2);
  if (iVar3 == 0) {
    (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
    return 0;
  }
  (**(code **)(**(int **)(iVar2 + 4) + 0xc))();
  FUN_0203263c(*(undefined4 *)(param_1 + 8),param_2);
  return 1;
}

