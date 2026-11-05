
void FUN_021bd7c0(int param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_1 + 0x24;
  param_2 = param_2 * 4;
  FUN_021bd794(*(undefined4 *)(iVar2 + param_2));
  piVar1 = *(int **)(*(int *)(*(int *)(iVar2 + param_2) + 4) + 100);
  (**(code **)(*piVar1 + 0x68))(piVar1,param_3);
  piVar1 = *(int **)(*(int *)(iVar2 + param_2) + 4);
  (**(code **)(*piVar1 + 0xd8))(piVar1,0);
  *(undefined4 *)(param_1 + 0x58) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x48) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x4c) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xa1) = 1;
  return;
}

