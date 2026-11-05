
void FUN_02192e0c(void)

{
  undefined4 uVar1;
  
  uVar1 = OS_DisableInterrupts();
  while (DAT_021a9d94 != 0) {
    FUN_02192eac();
  }
  OS_RestoreInterrupts(uVar1);
  return;
}

