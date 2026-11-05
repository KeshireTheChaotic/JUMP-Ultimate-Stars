
/* JUS-CLASS jus_TagAGEC::jus_TagAGEC [class-type-tag] stores vtable 02097418 into *this
   (constructor) */

undefined4 * jus_TagAGEC::jus_TagAGEC(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 local_10;
  
  local_10 = 0xc0000;
  uVar1 = FUN_02012ce8();
  jus_Class_02097558::jus_Class_02097558(param_1,uVar1,&local_10);
  *param_1 = &vftable;
  param_1[0xb] = param_2;
  return param_1;
}

