
void FUN_02162ad4(int *param_1)

{
  undefined4 uVar1;
  int unaff_r4;
  int *unaff_r5;
  
  uVar1 = (**(code **)(*param_1 + 4))();
  *(undefined4 *)(unaff_r4 + 0xbc) = uVar1;
  (**(code **)(*unaff_r5 + 4))();
  return;
}

