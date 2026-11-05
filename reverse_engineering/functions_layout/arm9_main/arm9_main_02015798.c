
void FUN_02015798(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_2 + 100) + 0x28);
  (*pcVar1)(*(int **)(param_2 + 100),0,pcVar1,param_4,param_4);
  FUN_020247b8(param_1,param_2);
  return;
}

