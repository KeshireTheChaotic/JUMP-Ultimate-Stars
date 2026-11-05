
undefined4
FUN_02062380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,int param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  
                    /* JUS-TAG strings=["[SDK+NINTENDO:BACKUP]"] */
  FUN_02000b54(s___SDK_NINTENDO_BACKUP__02000b7b + 1);
  uVar1 = OS_DisableInterrupts();
  while ((DAT_020aedb4 & 4) != 0) {
    FUN_02053290(&DAT_020aedac);
  }
  DAT_020aedb4 = DAT_020aedb4 | 4;
  DAT_020aecdc = param_5;
  DAT_020aecd8 = param_4;
  OS_RestoreInterrupts(uVar1);
  DAT_020aeccc = param_7;
  DAT_020aecd0 = param_8;
  DAT_020aecd4 = param_9;
  DAT_020aecbc = param_1;
  DAT_020aecc0 = param_2;
  DAT_020aecc4 = param_3;
  if (param_6 != 0) {
    FUN_02061ff8(0x2062445);
    return 1;
  }
  DAT_020aeda4 = DAT_020aab78;
  FUN_02062444(&DAT_020aeca0);
  if (*DAT_020aeca0 == 0) {
    return 1;
  }
  return 0;
}

