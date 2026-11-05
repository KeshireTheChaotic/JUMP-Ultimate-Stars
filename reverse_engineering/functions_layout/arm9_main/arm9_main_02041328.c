
/* JUS-CLASS jus_TagDUMY_Derived_02094a34::jus_TagDUMY_Derived_02094a34 [class-derived] stores
   vtable 02094a34 into *this (constructor) */

undefined4 *
jus_TagDUMY_Derived_02094a34::jus_TagDUMY_Derived_02094a34
          (undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  jus_TagDUMY::jus_TagDUMY(param_1,param_4);
  *param_1 = &vftable;
  param_1[9] = 0;
  uVar1 = FUN_0201a228(0x50);
  param_1[9] = uVar1;
  FUN_02064744();
  FUN_02064550(param_1[9],*param_2,param_2[1]);
  FUN_0203a264(param_1[9] + 0x48,param_2);
  if (param_3 != 0) {
    iVar2 = FUN_02004b04(param_3);
    uVar1 = FUN_0201a228(iVar2 + 1);
    param_1[4] = uVar1;
    FUN_02004b18(uVar1,param_3);
  }
  return param_1;
}

