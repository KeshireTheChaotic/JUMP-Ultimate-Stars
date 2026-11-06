
void FUN_02062608(uint param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6,int param_7)

{
  undefined4 uVar1;
  int iVar2;
  
  FUN_02061e4c();
  uVar1 = OS_DisableInterrupts();
  while ((DAT_020aedb4 & 4) != 0) {
    FUN_02053290(&DAT_020aedac);
  }
  DAT_020aedb4 = DAT_020aedb4 | 4;
  DAT_020aecd8 = param_5;
  DAT_020aecdc = param_6;
  OS_RestoreInterrupts(uVar1);
  DAT_020aecbc = param_2 + DAT_020af2c0;
  DAT_020aecc0 = param_3;
  DAT_020aecc4 = param_4;
  DAT_020aecc8 = param_1;
  if (param_1 < 4) {
    MI_StopDma();
  }
  iVar2 = FUN_02062874(&DAT_020af2e0);
  if (iVar2 == 0) {
    if (param_7 != 0) {
      FUN_02061ff8(0x20626dd);
      return;
    }
    DAT_020aeda4 = DAT_020aab78;
    FUN_020626dc(&DAT_020aeca0);
  }
  else if (param_7 == 0) {
    thunk_FUN_02061de4();
    return;
  }
  return;
}

