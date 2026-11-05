
/* JUS-CLASS ALObjectImp_020990e0::ALObjectImp_020990e0 [class-source-file] stores vtable 020990e0
   into *this (constructor) */

undefined4 * ALObjectImp_020990e0::ALObjectImp_020990e0(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  
  ALCollision_02094f78::ALCollision_02094f78();
  *param_1 = &vftable;
  param_1[7] = 0;
  *(undefined2 *)(param_1 + 10) = *(undefined2 *)(param_2 + 0x28);
  param_1[0xb] = 0;
  uVar1 = (**(code **)(**(int **)(param_2 + 0x30) + 0x18))();
  param_1[0xc] = uVar1;
  param_1[0xd] = *(undefined4 *)(param_2 + 0x34);
  param_1[0xe] = 0;
  param_1[0xf] = *(undefined4 *)(param_2 + 0x3c);
  param_1[0x10] = *(undefined4 *)(param_2 + 0x40);
  DAT_020a0ed8 = DAT_020a0ed8 + 1;
  FUN_02037b98(param_1[0xd] + 0x23c,param_1 + 8);
  *(byte *)(param_1 + 10) = *(byte *)(param_1 + 10) & 0xef;
  FUN_02027edc(param_1);
  return param_1;
}

