
/* JUS-CLASS jus_TagDLSE::jus_TagDLSE [class-type-tag] stores vtable 0209ad30 into *this
   (constructor) */

undefined4 *
jus_TagDLSE::jus_TagDLSE
          (undefined4 *param_1,undefined4 param_2,int *param_3,undefined4 param_4,undefined4 param_5
          ,undefined4 param_6,undefined1 param_7)

{
  int iVar1;
  undefined4 uVar2;
  
  jus_TagDLSE_Part_0209af58::jus_TagDLSE_Part_0209af58();
  *param_1 = &vftable;
  *(undefined1 *)(param_1 + 0xe) = param_7;
  param_1[0xf] = param_6;
  param_1[0x10] = 0;
  iVar1 = (**(code **)(*param_3 + 0x68))(param_3,param_4);
  uVar2 = FUN_0201a228(iVar1 + 1U & 0xfffffffe);
  param_1[0xd] = uVar2;
  uVar2 = (**(code **)(*param_3 + 0x68))(param_3,param_4);
  FUN_02051890(param_5,param_1[0xd],uVar2);
  return param_1;
}

