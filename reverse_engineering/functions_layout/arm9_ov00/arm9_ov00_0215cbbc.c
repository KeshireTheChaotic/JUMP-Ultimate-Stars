
void FUN_0215cbbc(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int *piVar1;
  int iVar2;
  int local_10;
  
  iVar2 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  local_10 = param_4;
  FUN_0214e27c(&local_10,*(undefined4 *)(iVar2 + 0x58));
  if (local_10 < -0x18000) {
    FUN_02028384(*(undefined4 *)(param_1 + 4),FUN_0215cc6c);
    piVar1 = *(int **)(*(int *)(iVar2 + 0x58) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar2 + 0x58) + 4));
    *(undefined4 *)(iVar2 + 0x68) = 0x1199;
    *(undefined4 *)(iVar2 + 0xc4) = 0x3999;
    piVar1 = *(int **)(*(int *)(iVar2 + 0x110) + 4);
    (**(code **)(*piVar1 + 0xd8))(piVar1,0);
    FUN_020282f4(*(undefined4 *)(*(int *)(iVar2 + 0x110) + 4));
    *(undefined4 *)(iVar2 + 0x120) = 0x1199;
    *(undefined4 *)(iVar2 + 0x17c) = 0x3999;
    return;
  }
  return;
}

