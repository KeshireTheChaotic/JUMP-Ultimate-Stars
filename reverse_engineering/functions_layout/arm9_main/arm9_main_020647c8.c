
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020647c8(undefined4 param_1)

{
  DAT_020afb28 = param_1;
                    /* JUS-TAG hw={"SYSTEM_SHARED":5}
                       io=["027ffc40","027ffe40","027ffe44","027ffe48","027ffe4c"] */
  DAT_020afb24 = FUN_02051fa0();
  DAT_020afb2c = 0;
  DAT_020afb30 = 0;
  DAT_020afb34 = 0;
  DAT_020afb38 = 0;
  FUN_020625b4();
  FUN_02063fc8(&DAT_020afb3c);
  FUN_02063f20(&DAT_020afb3c,&DAT_0209dd30,3);
  if (_DAT_027ffc40 == 2) {
    DAT_020afb2c = 0xffffffff;
    DAT_020afb30 = 0;
    DAT_020afb34 = 0xffffffff;
    DAT_020afb38 = 0;
    FUN_02063c0c(&DAT_020afb3c,0x20648bd);
    FUN_02063e7c(&DAT_020afb3c,0,0,0,0,0,0x20648c1,0x2064915);
    return;
  }
  FUN_02063c0c(&DAT_020afb3c,0x20648c5,0x602);
  if ((((_DAT_027ffe40 != -1) && (_DAT_027ffe40 != 0)) && (_DAT_027ffe48 != -1)) &&
     (_DAT_027ffe48 != 0)) {
    FUN_02063e7c(&DAT_020afb3c,0,_DAT_027ffe48,_DAT_027ffe4c,_DAT_027ffe40,_DAT_027ffe44,0x2064919,
                 0x2064915);
  }
  return;
}

