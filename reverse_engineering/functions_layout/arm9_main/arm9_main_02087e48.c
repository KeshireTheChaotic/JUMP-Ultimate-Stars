
/* JUS-GAME CommWrap::CommWrap_Loading_Create [source-string] __FILE__="CommWrap.cpp"
   __FUNCTION__="CommWrap_Loading_Create" lines=[1784] passed to 1 source-location call(s) */

void CommWrap::CommWrap_Loading_Create(void)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 in_r3;
  
  if (DAT_0214be20 == (undefined4 *)0x0) {
    DAT_0214be20 = (undefined4 *)
                   thunk_FUN_0201a228(0x50,s_CommWrap_cpp_020a01a4,
                                      s_CommWrap_Loading_Create_020a018c,0x6f8,in_r3);
    FUN_020517fc(DAT_0214be20,0,0x50);
    uVar1 = FUN_020101f4(s_common_loading_aar_020a01f8,0);
    *DAT_0214be20 = uVar1;
    iVar2 = FUN_02088098();
    *(bool *)(DAT_0214be20 + 2) = iVar2 == 0;
    *(undefined1 *)((int)DAT_0214be20 + 9) = 0;
    *(undefined1 *)((int)DAT_0214be20 + 10) = 0;
    *(undefined1 *)((int)DAT_0214be20 + 0xb) = 0;
    *(undefined1 *)(DAT_0214be20 + 3) = 0;
    FUN_020881f8();
    FUN_0204267c(DAT_020a0f64,FUN_02087ff0 + 1,DAT_0214be20);
  }
  return;
}

