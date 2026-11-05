
int * FUN_02042bb4(void)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_0201a228(0x78);
  if (piVar1 != (int *)0x0) {
    jus_Class_0209be5c::jus_Class_0209be5c(piVar1,0x21c78ec,0);
    *piVar1 = 0x21d4788;
    (**(code **)(*piVar1 + 0x118))(piVar1,0);
    (**(code **)(*piVar1 + 0x108))(piVar1,0);
    FUN_0202b2f4(piVar1,1);
    *piVar1 = 0x21d4d0c;
  }
  return piVar1;
}

