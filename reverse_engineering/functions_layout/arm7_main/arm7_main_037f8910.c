
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_037f8910(undefined4 param_1,int param_2)

{
  int unaff_r4;
  
  if (param_2 == 0) {
    unaff_r4 = 0;
  }
  else {
    if (*(int *)(_DAT_0380fff4 + 0x17c) == 0) {
      unaff_r4 = FUN_037fd480(*(undefined4 *)(_DAT_0380fff4 + 0x180),
                              *(undefined4 *)(_DAT_0380fff4 + 0x184));
    }
    else if (*(int *)(_DAT_0380fff4 + 0x17c) == 1) {
      unaff_r4 = (**(code **)(_DAT_0380fff4 + 0x180))(param_2 + 0xc);
    }
    if (unaff_r4 == 0) {
      unaff_r4 = 0;
    }
    else {
      *(undefined2 *)(unaff_r4 + 10) = 0xbf1d;
      *(undefined2 *)(unaff_r4 + 8) = 0;
      FUN_037f8ab0(param_1,unaff_r4);
    }
  }
  return unaff_r4;
}

