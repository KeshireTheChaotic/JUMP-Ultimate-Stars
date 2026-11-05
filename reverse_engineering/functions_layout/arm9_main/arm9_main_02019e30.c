
int FUN_02019e30(void)

{
  int iVar1;
  int iVar2;
  
  if (DAT_020a0e20 == 0) {
    iVar1 = FUN_0201a228(0x20);
    iVar2 = 0;
    if (iVar1 != 0) {
      iVar2 = jus_Class_02094be4::jus_Class_02094be4();
    }
    DAT_020a0e20 = iVar2;
  }
  return DAT_020a0e20;
}

