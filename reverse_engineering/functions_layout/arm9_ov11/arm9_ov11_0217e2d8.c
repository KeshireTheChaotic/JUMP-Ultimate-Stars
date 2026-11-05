
void FUN_0217e2d8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int *piVar2;
  undefined4 local_10;
  
  local_10 = param_4;
  iVar1 = FUN_02020d90();
  local_10 = 0x96000;
  (**(code **)(**(int **)(iVar1 + 4) + 0xa0))(*(int **)(iVar1 + 4),&local_10);
  FUN_02028384(*(undefined4 *)(iVar1 + 4),FUN_0217ee38);
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(*(int **)(iVar1 + 4),0x80000);
  piVar2 = *(int **)(iVar1 + 4);
  if (*(int *)(param_1 + 0x1c) == 0) {
    (**(code **)(*piVar2 + 0xd4))(piVar2,0);
  }
  else {
    (**(code **)(*piVar2 + 0xd4))(piVar2,*(undefined4 *)(*(int *)(param_1 + 0x1c) + 4));
  }
  *(int *)(param_1 + 0x54) = iVar1;
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x7d) = 0;
  return;
}

