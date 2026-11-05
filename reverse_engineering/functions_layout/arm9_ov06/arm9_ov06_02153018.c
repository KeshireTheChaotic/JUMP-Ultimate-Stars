
int FUN_02153018(int *param_1)

{
  int *piVar1;
  
  piVar1 = *(int **)(*param_1 + 0x18);
  if (piVar1 == (int *)0x0) {
    piVar1 = (int *)FUN_02036430(*(undefined4 *)(*param_1 + 0xc));
  }
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1[6];
}

