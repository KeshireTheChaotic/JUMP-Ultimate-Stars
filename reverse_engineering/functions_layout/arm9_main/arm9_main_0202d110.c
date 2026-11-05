
void FUN_0202d110(int param_1,undefined4 param_2,undefined4 *param_3,undefined4 param_4)

{
  int iVar1;
  code *pcVar2;
  
  iVar1 = FUN_02038458();
  pcVar2 = *(code **)(**(int **)(param_1 + 0x18) + 0x20);
  (*pcVar2)(*(int **)(param_1 + 0x18),param_2,iVar1,pcVar2,param_4);
  *(undefined4 *)(iVar1 + *(int *)(param_1 + 0x14) * 4) = *param_3;
  (**(code **)(**(int **)(param_1 + 0x18) + 0x24))(*(int **)(param_1 + 0x18),param_2,iVar1);
  return;
}

