
void FUN_02053448(void)

{
  code *pcVar1;
  
  pcVar1 = *(code **)(*DAT_020aab6c + 0xb4);
  if (pcVar1 != (code *)0x0) {
    *(undefined4 *)(*DAT_020aab6c + 0xb4) = 0;
    (*pcVar1)();
    OS_DisableInterrupts();
  }
  FUN_020533e8();
  return;
}

