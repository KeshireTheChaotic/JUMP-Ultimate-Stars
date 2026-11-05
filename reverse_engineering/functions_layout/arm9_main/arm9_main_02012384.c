
void FUN_02012384(int param_1,int param_2)

{
  int *piVar1;
  
  *(int *)(param_1 + 0x1c) = param_2;
  if (param_2 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    piVar1 = (int *)FUN_02012318();
    (**(code **)(*piVar1 + 0x28))();
  }
  FUN_020123d8(param_1);
  return;
}

