
/* JUS-CLASS ALStreamImp::ALStreamImp [class-source-file] stores vtable 02094ac4 into *this
   (constructor) */

undefined4 *
ALStreamImp::ALStreamImp(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  
                    /* JUS-TAG strings=["ALMemoryStreamImp Data"] */
  jus_TagDUMY::jus_TagDUMY(param_1,0,param_3,param_4,param_4);
  *param_1 = &vftable;
  param_1[9] = param_2;
  *(undefined1 *)(param_1 + 10) = 1;
  *(undefined1 *)((int)param_1 + 0x29) = 0;
  param_1[0xb] = 0;
  if (param_2 != 0) {
    uVar1 = FUN_0201a228(param_2);
    param_1[8] = uVar1;
    FUN_0201ac08(uVar1,s_ALMemoryStreamImp_Data_0209d9fc);
  }
  param_1[3] = param_2;
  return param_1;
}

