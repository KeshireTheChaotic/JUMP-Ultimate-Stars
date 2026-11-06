
void FUN_020626dc(void)

{
  code *pcVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar3 = FUN_02062af8(&DAT_020af2e0);
  if (iVar3 != 0) {
    (*DAT_020af2e0)(&DAT_020af2e0);
  }
  CARDi_ReadRomIDCore();
  FUN_02062cfc();
  *DAT_020aeca0 = 0;
  uVar2 = DAT_020aecdc;
  pcVar1 = DAT_020aecd8;
  uVar4 = OS_DisableInterrupts();
  DAT_020aedb4 = DAT_020aedb4 & 0xffffffb3;
  FUN_02053210(&DAT_020aedac);
  if ((DAT_020aedb4 & 0x10) != 0) {
    FUN_020531dc(&DAT_020aece4);
  }
  OS_RestoreInterrupts(uVar4);
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(uVar2);
  }
  return;
}

