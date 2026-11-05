
void FUN_021599f0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(*(int *)(*(int *)(param_1 + 4) + 0x10) + 0x1c) + 4);
  pcVar2 = *(code **)(*piVar1 + 0xd8);
  (*pcVar2)(piVar1,1,pcVar2,param_4,param_4);
  return;
}

