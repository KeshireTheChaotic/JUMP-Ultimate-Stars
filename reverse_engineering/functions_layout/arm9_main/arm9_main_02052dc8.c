
int FUN_02052dc8(void)

{
  int iVar1;
  
  OS_DisableInterrupts();
  iVar1 = 0;
  if (DAT_020aab60 != 0) {
    iVar1 = DAT_020aab60;
    DAT_020aab60 = DAT_020aab60 + -1;
  }
  OS_RestoreInterrupts();
  return iVar1;
}

