
void FUN_0215ee78(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  
  if (param_1 == (int *)0x0) {
    return;
  }
  pcVar1 = *(code **)(**(int **)(*param_1 + 4) + 0xd8);
  (*pcVar1)(*(int **)(*param_1 + 4),1,pcVar1,param_4,param_4);
  return;
}

