
void FUN_02054a20(void)

{
  undefined1 auStack_8 [8];
  
  if (DAT_020aadf8 == (code *)0x0) {
    return;
  }
  OS_EnableProtectionUnit(auStack_8,0x9f);
  (*DAT_020aadf8)(&DAT_020aae04,DAT_020aadfc);
  OS_DisableProtectionUnit();
  return;
}

