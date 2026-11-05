
undefined4 FUN_021536a8(void)

{
  undefined4 uVar1;
  
  OS_DisableInterrupts();
  if (DAT_0216d1b8 == DAT_0216d1bc) {
    uVar1 = 0;
  }
  else {
    uVar1 = (&DAT_0216d1ec)[DAT_0216d1bc];
    DAT_0216d1bc = DAT_0216d1bc + 1;
    if (3 < DAT_0216d1bc) {
      DAT_0216d1bc = 0;
    }
  }
  OS_RestoreInterrupts();
  return uVar1;
}

