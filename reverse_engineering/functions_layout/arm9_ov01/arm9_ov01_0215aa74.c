
void FUN_0215aa74(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + (param_2 + 2) * 4 + 0x30) + 4);
  pcVar2 = *(code **)(*piVar1 + 0xd8);
  (*pcVar2)(piVar1,0,pcVar2,param_4,param_4);
  FUN_02023820(*(undefined4 *)(*(int *)(param_1 + (param_2 + 4) * 4 + 0x70) + 4),0);
  return;
}

