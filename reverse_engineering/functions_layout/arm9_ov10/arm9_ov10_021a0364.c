
int FUN_021a0364(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_02028e90();
  if (piVar1[0x37] == 0) {
    (**(code **)(*piVar1 + 0x10))();
  }
  return piVar1[0x37];
}

