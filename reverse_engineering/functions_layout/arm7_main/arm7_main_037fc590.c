
void FUN_037fc590(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*DAT_038082d0 + 0x98);
  if (pcVar1 != (code *)0x0) {
    *(undefined4 *)(*DAT_038082d0 + 0x98) = 0;
    (*pcVar1)();
    OS_DisableInterrupts();
  }
  FUN_037fc530();
  return;
}

