
void FUN_02062994(void)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  FUN_02051290(DAT_020aecc8);
  DAT_020aecbc = DAT_020aecbc + 0x200;
  DAT_020aecc0 = DAT_020aecc0 + 0x200;
  DAT_020aecc4 = DAT_020aecc4 + -0x200;
  if (DAT_020aecc4 == 0) {
    FUN_02051d14(0x80000);
    FUN_02051ce0(0x80000);
    FUN_0206275c();
    FUN_02062cfc();
    *DAT_020aeca0 = 0;
    uVar2 = DAT_020aecdc;
    pcVar1 = DAT_020aecd8;
    uVar3 = OS_DisableInterrupts();
    DAT_020aedb4 = DAT_020aedb4 & 0xffffffb3;
    FUN_02053210(&DAT_020aedac);
    if ((DAT_020aedb4 & 0x10) != 0) {
      FUN_020531dc(&DAT_020aece4);
    }
    OS_RestoreInterrupts(uVar3);
    if (pcVar1 != (code *)0x0) {
      (*pcVar1)(uVar2);
      return;
    }
  }
  else {
    FUN_02062a40();
  }
  return;
}

