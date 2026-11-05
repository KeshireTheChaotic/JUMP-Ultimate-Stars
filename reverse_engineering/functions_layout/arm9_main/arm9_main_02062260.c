
undefined4 FUN_02062260(int param_1)

{
  code *pcVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
                    /* JUS-TAG strings=["[SDK+NINTENDO:BACKUP]"] */
  FUN_02000b54(s___SDK_NINTENDO_BACKUP__02000b7b + 1);
  if (param_1 == 0) {
    FUN_02055684();
  }
  FUN_02061e4c();
  uVar2 = OS_DisableInterrupts();
  while ((DAT_020aedb4 & 4) != 0) {
    FUN_02053290(&DAT_020aedac);
  }
  DAT_020aedb4 = DAT_020aedb4 | 4;
  DAT_020aecd8 = (code *)0x0;
  DAT_020aecdc = 0;
  OS_RestoreInterrupts(uVar2);
  FUN_02062040(param_1);
  DAT_020aeda4 = DAT_020aab78;
  FUN_02062b60(&DAT_020aeca0,2,1);
  DAT_020aeca0[3] = 0;
  DAT_020aeca0[4] = (int)&DAT_020aedc0;
  DAT_020aeca0[5] = 1;
  FUN_02062b60(&DAT_020aeca0,6);
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
  }
  if (*DAT_020aeca0 == 0) {
    return 1;
  }
  return 0;
}

