
void FUN_02020e98(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(**(int **)(param_1 + 4) + 0xf0);
  (*pcVar1)(*(int **)(param_1 + 4),*(undefined4 *)(param_2 + 4),pcVar1,param_4,param_4);
  return;
}

