
/* JUS-GAME CommLib::CommLibInit [source-string] __FILE__="CommLib.cpp" __FUNCTION__="CommLibInit"
   lines=[701, 714, 717] passed to 3 source-location call(s) */

void CommLib::CommLibInit(void)

{
                    /* JUS-TAG strings=["CommLib.cpp","CommLibInit"] */
  DAT_0214be90 = 0;
  if (DAT_0214be4e == 0) {
    DAT_0214be4e = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
  }
  FUN_020517fc(&DAT_0214ca28,0,0x10);
  FUN_020517fc(&DAT_0214ca20,0,8);
  FUN_020517fc(&DAT_0214ca60,0,0x40);
  FUN_020517fc(&DAT_0214bebc,0,0x10);
  FUN_020517fc(&DAT_0214beac,0,0x10);
  DAT_0214be7c = thunk_FUN_0201a228(0xf00,s_CommLib_cpp_020a0338,s_CommLibInit_020a0240,0x2bd);
  FUN_02058494(DAT_0214be7c,2);
  DAT_0214bea4 = 4;
  FUN_020595f0(0x208894d);
  FUN_02088eac(4,0x78);
  DAT_0214be9c = thunk_FUN_0201a228(0x400,s_CommLib_cpp_020a0338,s_CommLibInit_020a0240,0x2ca);
  DAT_0214be80 = 0;
  DAT_0214be88 = thunk_FUN_0201a228(0x2000,s_CommLib_cpp_020a0338,s_CommLibInit_020a0240,0x2cd);
  DAT_0214be68 = (int *)FUN_0201a274(DAT_0214be88,0x2000);
  *(undefined1 *)(*DAT_0214be68 + 0x414) = 0;
  return;
}

