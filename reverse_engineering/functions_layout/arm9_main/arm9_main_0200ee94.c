
void FUN_0200ee94(void)

{
  int *piVar1;
  int *piVar2;
  
  if (DAT_020a0c30 == (int *)0x0) {
    return;
  }
  do {
    piVar1 = DAT_020a0c30 + 2;
    piVar2 = DAT_020a0c30 + 1;
    DAT_020a0c30 = (int *)*DAT_020a0c30;
    (*(code *)*piVar2)(*piVar1,0xffffffff);
  } while (DAT_020a0c30 != (int *)0x0);
  return;
}

