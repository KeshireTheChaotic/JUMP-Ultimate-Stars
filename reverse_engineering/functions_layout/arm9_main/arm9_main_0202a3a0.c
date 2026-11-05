
void FUN_0202a3a0(void)

{
  int iVar1;
  
  if (*(char *)(DAT_020a0f64 + 0x420) == '\0') {
    return;
  }
  for (iVar1 = DAT_020a2160; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    if ((*(byte *)(iVar1 + 0x25) & 0xf) >> 3 != 0) {
      FUN_0202a2a4(iVar1,0);
    }
  }
  return;
}

