
int FUN_02052e00(void)

{
  int unaff_r4;
  
  OS_DisableInterrupts();
  if (DAT_020aab60 != -1) {
    unaff_r4 = DAT_020aab60;
    DAT_020aab60 = DAT_020aab60 + 1;
  }
  OS_RestoreInterrupts();
  return unaff_r4;
}

