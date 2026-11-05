
/* JUS-CLASS jus_TagCLDS::jus_TagCLDS [class-type-tag] stores vtable 020949ec into *this
   (constructor) */

undefined4 *
jus_TagCLDS::jus_TagCLDS
          (undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4,char param_5)

{
  *param_1 = &jus_Class_02094b9c::vftable;
  param_1[1] = param_2;
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 3) = 0;
  if (param_5 == '\0') {
    param_1[1] = param_2 & 0xffff;
    param_1[2] = param_3;
  }
  else {
    FUN_020436f4(param_1,param_2,param_4,param_3,param_4);
  }
  return param_1;
}

