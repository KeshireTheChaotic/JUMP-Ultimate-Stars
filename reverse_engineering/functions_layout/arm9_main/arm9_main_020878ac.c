
/* JUS-GAME CommWrap::CommWrapAntenna_Create [source-string] __FILE__="CommWrap.cpp"
   __FUNCTION__="CommWrapAntenna_Create" lines=[1421] passed to 1 source-location call(s) */

void CommWrap::CommWrapAntenna_Create(int param_1)

{
  int iVar1;
  
                    /* JUS-TAG
                       strings=["CommWrap.cpp","CommWrapAntenna_Create","common/antenna.aar","common/antenna_wifi.aar","common/voice_icon.aar"]
                        */
  if (DAT_0214be24 != (int *)0x0) {
    FUN_02087980();
  }
  DAT_0214be24 = (int *)thunk_FUN_0201a228(0x24,s_CommWrap_cpp_020a01a4,
                                           s_CommWrapAntenna_Create_020a0174,0x58d);
  FUN_020517fc(DAT_0214be24,0,0x24);
  *DAT_0214be24 = param_1;
  if (param_1 == 1) {
    iVar1 = FUN_020101f4(s_common_antenna_wifi_aar_020a01b4,0);
    DAT_0214be24[2] = iVar1;
    iVar1 = FUN_020101f4(s_common_voice_icon_aar_020a01cc,0);
    DAT_0214be24[3] = iVar1;
  }
  else {
    iVar1 = FUN_020101f4(s_common_antenna_aar_020a01e4,0);
    DAT_0214be24[2] = iVar1;
  }
  iVar1 = FUN_02087b70();
  *(bool *)(DAT_0214be24 + 6) = iVar1 == 0;
  iVar1 = FUN_02087b70();
  *(bool *)((int)DAT_0214be24 + 0x19) = iVar1 == 0;
  *(undefined1 *)((int)DAT_0214be24 + 0x1a) = 0;
  *(undefined1 *)((int)DAT_0214be24 + 0x1b) = 0;
  *(undefined1 *)((int)DAT_0214be24 + 5) = 0;
  *(undefined1 *)((int)DAT_0214be24 + 6) = 0;
  FUN_02087de0();
  return;
}

