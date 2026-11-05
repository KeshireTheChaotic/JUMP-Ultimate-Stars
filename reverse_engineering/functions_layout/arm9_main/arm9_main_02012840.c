
/* JUS-CLASS jus_Class_0209b010::jus_Class_0209b010 [class-default] stores vtable 0209b010 into
   *this (constructor) */

undefined4 *
jus_Class_0209b010::jus_Class_0209b010
          (undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 local_10;
  undefined4 uStack_c;
  
  puVar1 = param_1;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)&DAT_020a0c34;
  }
  local_10 = *param_3;
  if (param_2 == 0) {
    param_2 = puVar1[0x117];
  }
  uStack_c = param_4;
  jus_Class_02097558::jus_Class_02097558(param_1,param_2,&local_10);
  *param_1 = &vftable;
  return param_1;
}

