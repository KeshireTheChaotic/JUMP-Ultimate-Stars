
/* JUS-CLASS ALFont_021d4ed0::ALFont_021d4ed0 [class-source-file] stores vtable 021d4ed0 into *this
   (constructor) */

undefined4 * ALFont_021d4ed0::ALFont_021d4ed0(undefined4 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  
  jus_Class_021d4950::jus_Class_021d4950();
  *param_1 = &vftable;
  param_1[3] = param_3;
  param_1[4] = 0;
  uVar1 = thunk_FUN_0201a228(param_3 * 6,s_ALFont_cpp_021d5060,&DAT_021d4e54,0x14a);
  param_1[2] = uVar1;
  FUN_02051890(param_2,param_1[2],param_3 * 6);
  return param_1;
}

