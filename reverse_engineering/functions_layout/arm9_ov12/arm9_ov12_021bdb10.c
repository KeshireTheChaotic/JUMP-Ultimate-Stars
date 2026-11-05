
int FUN_021bdb10(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02035c90();
  if (piVar1[0xe] == 0) {
    (**(code **)(*piVar1 + 0x14))();
  }
  return piVar1[0xe];
}

