
void FUN_02062c48(void)

{
  undefined4 uVar1;
  
  do {
    uVar1 = OS_DisableInterrupts();
    while ((DAT_020aedb4 & 8) == 0) {
      DAT_020aeda4 = &DAT_020aece4;
      FUN_02053290(0);
    }
    OS_RestoreInterrupts(uVar1);
    (*DAT_020aece0)(&DAT_020aeca0);
  } while( true );
}

