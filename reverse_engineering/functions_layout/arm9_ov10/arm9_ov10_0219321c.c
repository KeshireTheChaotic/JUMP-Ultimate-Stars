
int FUN_0219321c(void)

{
  int iVar1;
  
  if (DAT_021a8538 == 0) {
    if (((DAT_021a9d2c & 3) == 1) && (iVar1 = OS_GetProcMode(), iVar1 != 0x12)) {
      FUN_02052ea0(10);
    }
  }
  else if (DAT_021a9d28 == 0) {
    DAT_021a9d28 = DAT_021a8538;
  }
  return DAT_021a8538;
}

