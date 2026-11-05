
int FUN_021a0390(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02020aa0();
  if (piVar1[6] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[6];
}

