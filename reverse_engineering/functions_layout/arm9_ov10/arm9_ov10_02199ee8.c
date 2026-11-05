
/* JUS-GAME WiFi::WiFi_Init_MemoryManager [source-string] __FILE__="WiFi.cpp"
   __FUNCTION__="WiFi_Init_MemoryManager" lines=[307] passed to 1 source-location call(s) */

void WiFi::WiFi_Init_MemoryManager(void)

{
  undefined4 uVar1;
  undefined4 in_r3;
  
  if (DAT_0214ccfc == 0) {
    DAT_0214ccfc = thunk_FUN_0201a228(0x2d04,s_WiFi_cpp_021a716c,s_WiFi_Init_MemoryManager_021a7154,
                                      0x133,in_r3);
    FUN_020517fc(DAT_0214ccfc,0,0x2d04);
    uVar1 = FUN_020101f4(s_common_antenna_wifi_aar_021a7178,0);
    *(undefined4 *)(DAT_0214ccfc + 0x2aa4) = uVar1;
    uVar1 = FUN_020101f4(s_common_voice_icon_aar_021a7190,0);
    *(undefined4 *)(DAT_0214ccfc + 0x2aa8) = uVar1;
    FUN_02199f94();
    DAT_0214cd00 = DAT_0214cd00 | 2;
    return;
  }
  return;
}

