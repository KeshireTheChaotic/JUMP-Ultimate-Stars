
void FUN_020400c4(int *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  
  piVar1 = (int *)(**(code **)(*param_1 + 0x3c))();
  uVar2 = (**(code **)(*piVar1 + 100))();
  (**(code **)(*param_1 + 0x60))(param_1,uVar2);
  return;
}

