
void FUN_02155634(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int *piVar1;
  code *pcVar2;
  
  piVar1 = *(int **)(*(int *)(param_1 + 0x8c) + 4);
  pcVar2 = *(code **)(*piVar1 + 0x94);
  (*pcVar2)(piVar1,0x1000 << (param_2 & 0xff),pcVar2,param_4,param_4);
  return;
}

