
/* JUS-CLASS ALStreamImp::ALStreamImp [class-source-file] stores vtable 02094ac4 into *this
   (constructor) */

undefined4 *
ALStreamImp::ALStreamImp
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  jus_TagDUMY::jus_TagDUMY(param_1,0,param_3,param_4,param_4);
  *param_1 = &vftable;
  param_1[9] = param_3;
  *(char *)(param_1 + 10) = (char)param_4;
  *(undefined1 *)((int)param_1 + 0x29) = 1;
  param_1[0xb] = 0;
  param_1[8] = param_2;
  return param_1;
}

