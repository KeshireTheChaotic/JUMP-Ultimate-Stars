
void FUN_02150660(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int *piVar2;
  int local_18;
  
  iVar1 = FUN_0203b3f4();
  iVar1 = FUN_0215e2d4(*(undefined4 *)(iVar1 + 0x88),0x800000,param_2,param_3,param_4,param_5);
  (**(code **)(**(int **)(iVar1 + 4) + 0xd8))(*(int **)(iVar1 + 4),1);
  FUN_021506ec(param_1,iVar1);
  local_18 = param_5 << 0xc;
  piVar2 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar2 + 0x10))(piVar2,&local_18);
  return;
}

