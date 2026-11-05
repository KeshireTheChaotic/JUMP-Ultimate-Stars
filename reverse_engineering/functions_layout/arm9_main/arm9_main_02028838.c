
void FUN_02028838(int param_1,int *param_2)

{
  int *piVar1;
  
  piVar1 = param_2;
  if (param_2 != (int *)0x0) {
    piVar1 = param_2 + 1;
  }
  FUN_02037c24(*(undefined4 *)(param_1 + 0x38),piVar1);
  if (param_2 == (int *)0x0) {
    return;
  }
  (**(code **)(*param_2 + 0x1c))();
  return;
}

