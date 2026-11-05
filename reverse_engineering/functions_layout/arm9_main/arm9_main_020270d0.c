
/* JUS-CLASS ALObjectImp_020990e0::ALObjectImp_020990e0 [class-source-file] stores vtable 020990e0
   into *this (constructor) */

undefined4 * ALObjectImp_020990e0::ALObjectImp_020990e0(undefined4 *param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = DAT_020a1020;
  }
  ALCollision_02094f78::ALCollision_02094f78(param_1,param_2);
  *param_1 = &vftable;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 10) = 0;
  param_1[0xb] = 0;
  param_1[0xc] = &DAT_020a11b8;
  param_1[0xd] = DAT_020a0e80;
  param_1[0xe] = 0;
  param_1[0x10] = &LAB_0202836c;
  DAT_020a0ed8 = DAT_020a0ed8 + 1;
  param_1[0xf] = *(undefined4 *)(param_1[0xd] + 0x254);
  FUN_02037b98(param_1[0xd] + 0x23c,param_1 + 8);
  FUN_020280c4(param_1);
  return param_1;
}

