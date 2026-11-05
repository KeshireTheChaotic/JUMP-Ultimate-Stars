
void FUN_037fc1cc(uint param_1)

{
  ulonglong uVar1;
  undefined4 uVar2;
  int local_3c;
  undefined1 auStack_38 [44];
  
  FUN_037fdc48(auStack_38);
  local_3c = *DAT_038082d0;
  uVar2 = OS_DisableInterrupts();
  *(undefined1 **)(local_3c + 0x94) = auStack_38;
  uVar1 = (ulonglong)param_1 * 0x82ea >> 6;
  FUN_037fdaa4(auStack_38,(int)uVar1,(int)(uVar1 >> 0x20),&LAB_037fc1ac,&local_3c);
  while (local_3c != 0) {
    FUN_037fc4dc(0);
  }
  OS_RestoreInterrupts(uVar2);
  return;
}

