
void FUN_0215aa08(int param_1,undefined4 param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  
  uVar1 = FUN_0215a9e0(param_2);
  iVar2 = FUN_021504d4(uVar1,0x31305053);
  iVar3 = 0;
  if (iVar2 != 0) {
    iVar3 = (int)*(char *)(param_1 + 0x4d6);
  }
  if (iVar2 == 0 || iVar3 == param_3) {
    return;
  }
  *(char *)(param_1 + 0x4d6) = (char)param_3;
  FUN_02023894(*(undefined4 *)(iVar2 + 4),param_3 + 0x820000,0);
  (**(code **)(**(int **)(*(int *)(iVar2 + 4) + 0x68) + 0x6c))();
  if (param_3 == 0x2a) {
    FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_0215aadc);
    (**(code **)(**(int **)(iVar2 + 4) + 0x24))(*(int **)(iVar2 + 4),param_1);
  }
  else {
    FUN_02028384(*(undefined4 *)(iVar2 + 4),FUN_021593c8);
  }
  if (param_4 == 0) {
    return;
  }
  if (param_3 == 0x2a) {
    FUN_0207342c(0x79,1);
    return;
  }
  if (param_3 == 0x28) {
    FUN_0207342c(0x79,0);
    return;
  }
  return;
}

