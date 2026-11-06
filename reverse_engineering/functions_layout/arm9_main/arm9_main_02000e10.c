
void FUN_02000e10(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 auStack_50 [17];
  
                    /* JUS-TAG strings=["%s.available.gs.nintendowifi.net"] */
  puVar1 = auStack_50;
  FUN_02004b18(&DAT_020a0604,param_1);
  DAT_020a0644 = -1;
  FUN_02001ecc();
  if ((char)DAT_020a05c4 == '\0') {
    FUN_02003ce0(auStack_50,s__s_available_gs_nintendowifi_net_02092ee4,param_1);
  }
  else {
    puVar1 = &DAT_020a05c4;
  }
  iVar2 = FUN_02000ee4(puVar1,0x6cfc,0x20a0648);
  if ((iVar2 != 0) && (DAT_020a0644 = FUN_02001b94(2,2,0), DAT_020a0644 != -1)) {
    DAT_020a0650 = 9;
    iVar2 = FUN_02004b04(param_1);
    FUN_02002434(0x20a0655,param_1,iVar2 + 1);
    DAT_020a0690 = iVar2 + 6;
    FUN_02000eb0();
    DAT_020a0698 = 0;
  }
  return;
}

