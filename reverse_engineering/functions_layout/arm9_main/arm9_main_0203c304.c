
/* JUS-CLASS jus_Class_020942e4::jus_Class_020942e4 [class-default] stores vtable 020942e4 into
   *this (constructor) */

undefined4 *
jus_Class_020942e4::jus_Class_020942e4
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_10;
  undefined4 uStack_c;
  
  local_10 = 0x80000;
  uStack_c = param_4;
  jus_Class_02094370::jus_Class_02094370(param_1,&local_10);
  *param_1 = &vftable;
  jus_Class_02094220::jus_Class_02094220(param_1 + 6);
  jus_Class_02094220::jus_Class_02094220(param_1 + 9);
  jus_Class_02094220::jus_Class_02094220(param_1 + 0xc);
  *(undefined1 *)(param_1 + 0xf) = 0;
  *(undefined1 *)((int)param_1 + 0x3d) = 0;
  *(undefined1 *)((int)param_1 + 0x3e) = 0;
  return param_1;
}

