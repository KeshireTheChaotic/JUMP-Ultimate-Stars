
/* JUS-CLASS ALFont_021d5010::ALFont_021d5010 [class-source-file] stores vtable 021d5010 into *this
   (constructor) */

undefined4 *
ALFont_021d5010::ALFont_021d5010
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  jus_Class_020941f0::jus_Class_020941f0();
  *param_1 = &vftable;
  ALUtilImp::SetItemSize(param_1 + 7);
  param_1[0xc] = param_4;
  param_1[0x10] = 0;
  param_1[0x13] = param_2;
  param_1[0x15] = 0;
  *(undefined1 *)(param_1 + 0x16) = 0;
  param_1[0x19] = 0;
  param_1[0x1a] = 0;
  DAT_021d52dc = DAT_021d52dc + 1;
  param_1[0xd] = param_1;
  param_1[10] = param_3;
  param_1[0xb] = 0;
  return param_1;
}

