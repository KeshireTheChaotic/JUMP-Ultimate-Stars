
void FUN_02052ea0(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int iStack_3c;
  undefined1 auStack_38 [44];
  
  FUN_020550a0(auStack_38);
  iStack_3c = *(int *)*puRam02052f40;
  uVar2 = OS_DisableInterrupts();
  uVar1 = (ulonglong)uRam02052f44;
  *(undefined1 **)(iStack_3c + 0xb0) = auStack_38;
  uVar1 = uVar1 * param_1 >> 6;
  FUN_02054ee8(auStack_38,(int)uVar1,(int)(uVar1 >> 0x20),uRam02052f48,&iStack_3c);
  while (iStack_3c != 0) {
    FUN_02053290(0);
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

