
/* JUS-CLASS jus_TagDUMY_Derived_02094a7c::jus_TagDUMY_Derived_02094a7c [class-derived] stores
   vtable 02094a7c into *this (constructor) */

undefined4 *
jus_TagDUMY_Derived_02094a7c::jus_TagDUMY_Derived_02094a7c
          (undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
          )

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  jus_TagDUMY::jus_TagDUMY(param_1,0);
  *param_1 = &vftable;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = param_5;
  param_1[0xb] = param_3;
  param_1[3] = param_4;
  if (((int *)param_1[9])[8] == 0) {
    uVar1 = (**(code **)(*param_2 + 0x28))();
    uVar2 = jus_AllocDebug(param_4);
    param_1[8] = uVar2;
    (**(code **)(*param_2 + 0x24))(param_2,param_3);
    (**(code **)(*param_2 + 0x14))(param_2,param_1[8],param_4);
    (**(code **)(*param_2 + 0x24))(param_2,uVar1);
    *(undefined1 *)((int)param_1 + 0x1b) = 1;
    param_1[9] = 0;
  }
  else {
    (**(code **)(*(int *)param_1[9] + 8))();
    *(undefined1 *)((int)param_1 + 0x1b) = 0;
  }
  return param_1;
}

