
undefined4 FUN_03803c50(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  
  uVar2 = OS_DisableInterrupts();
  while ((DAT_03809d7c & 4) != 0) {
    FUN_037fc4dc(&DAT_03809d74);
  }
  DAT_03809d7c = DAT_03809d7c | 4;
  DAT_03809cbc = (code *)0x0;
  DAT_03809cc0 = 0;
  OS_RestoreInterrupts(uVar2);
  uVar3 = FUN_03803d18();
  *DAT_03809c80 = 0;
  uVar2 = DAT_03809cc0;
  pcVar1 = DAT_03809cbc;
  uVar4 = OS_DisableInterrupts();
  DAT_03809d7c = DAT_03809d7c & 0xffffffb3;
  FUN_037fc460(&DAT_03809d74);
  if ((DAT_03809d7c & 0x10) != 0) {
    FUN_037fc42c(&DAT_03809cc8);
  }
  OS_RestoreInterrupts(uVar4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  return uVar3;
}

