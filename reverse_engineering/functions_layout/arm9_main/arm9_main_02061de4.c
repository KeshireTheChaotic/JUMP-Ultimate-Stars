
undefined4 FUN_02061de4(void)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  while ((DAT_020aedb4 & 4) != 0) {
    FUN_02053290(&DAT_020aedac);
  }
  OS_RestoreInterrupts(uVar1);
  if (*DAT_020aeca0 == 0) {
    return 1;
  }
  return 0;
}

