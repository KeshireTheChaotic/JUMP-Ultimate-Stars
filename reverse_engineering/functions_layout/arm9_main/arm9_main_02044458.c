
void FUN_02044458(int *param_1,int param_2)

{
  int *piVar1;
  
  piVar1 = param_1;
  if (param_2 != 0) {
    piVar1 = (int *)param_1[0xf];
  }
  if (param_2 != 0 && piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xc))();
    param_1[0xf] = 0;
    return;
  }
  return;
}

