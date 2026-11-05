
/* JUS-CLASS jus_TagDLST::jus_TagDLST [class-type-tag] stores vtable 0209ac78 into *this
   (constructor) */

undefined4 *
jus_TagDLST::jus_TagDLST
          (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined1 param_5
          )

{
  jus_TagDLSE::jus_TagDLSE(param_1,param_2,DAT_020a0eb8,param_3,&DAT_0208dbf8,param_4,param_5);
  *param_1 = &vftable;
  param_1[0x11] = param_3;
  (**(code **)(*param_3 + 0x70))();
  return param_1;
}

