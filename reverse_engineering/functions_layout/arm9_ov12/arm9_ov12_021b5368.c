
void FUN_021b5368(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_021b539c();
  if (iVar1 != 0) {
    iVar1 = (**(code **)(**(int **)(iVar1 + 4) + 0x128))();
    iVar2 = FUN_02020ed0(param_1,0);
    FUN_021b0ba0(*(undefined4 *)(iVar2 + 4),iVar1 != 0);
  }
  return;
}

