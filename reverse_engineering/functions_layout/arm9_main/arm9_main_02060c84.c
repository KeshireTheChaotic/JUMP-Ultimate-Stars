
void FUN_02060c84(void)

{
  undefined4 uVar1;
  int iVar2;
  code *in_lr;
  
  uVar1 = OS_DisableInterrupts();
  iVar2 = FUN_020557c8(6,0x3000200,0);
  if (iVar2 < 0) {
    OS_RestoreInterrupts(uVar1);
    DAT_020aeb94 = DAT_020aeb94 | 4;
    if (DAT_020aeb60 != (code *)0x0) {
      (*DAT_020aeb60)(2,4,0);
      (*in_lr)();
      return;
    }
  }
  else {
    DAT_020aeb96 = DAT_020aeb96 | 4;
    DAT_020aeb94 = DAT_020aeb94 & 0xfffb;
    OS_RestoreInterrupts(uVar1);
  }
  (*in_lr)();
  return;
}

