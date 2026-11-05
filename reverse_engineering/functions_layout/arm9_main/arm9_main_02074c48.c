
int FUN_02074c48(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02035e88();
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[0xe];
}

