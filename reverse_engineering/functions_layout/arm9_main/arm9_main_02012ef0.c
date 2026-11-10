
/* JUS-CLASS jus_TagDLSE_Part_0209af58::jus_TagDLSE_Part_0209af58 [class-owned] stores vtable
   0209af58 into *this (constructor) */

undefined4 *
jus_TagDLSE_Part_0209af58::jus_TagDLSE_Part_0209af58
          (undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 local_18;
  
  puVar1 = param_1;
  if (param_2 == 0) {
    puVar1 = (undefined4 *)&DAT_020a0c34;
  }
  local_18 = 0xc0000;
  if (param_2 == 0) {
    iVar2 = puVar1[0x110];
  }
  else {
    iVar2 = param_2;
  }
  jus_Class_0209b010::jus_Class_0209b010(param_1,iVar2,&local_18);
  *param_1 = &vftable;
  param_1[0xb] = param_3;
  param_1[0xc] = param_4;
  if (DAT_020a1074 == (int *)0x0) {
    if ((DAT_020a0e0c & 1) == 0) {
      PropBindInstance_02095200::PropBindInstance_02095200(&DAT_020a1a44,DAT_020a1090);
      FUN_0200f2b0(&DAT_020a1a44,PropBindInstance_02095200::~PropBindInstance_02095200,&DAT_020a1674
                  );
      DAT_020a0e0c = DAT_020a0e0c | 1;
    }
    DAT_020a1074 = &DAT_020a1a44;
    iVar2 = FUN_0201a228(0x14);
    uVar3 = 0;
    if (iVar2 != 0) {
      uVar3 = jus_Prop_TargetPropName::jus_Prop_TargetPropName();
    }
    (**(code **)(*DAT_020a1074 + 0x3c))(DAT_020a1074,uVar3);
    if (param_2 == 0) {
      FUN_0202f7b8(param_1,DAT_020a1074);
    }
  }
  return param_1;
}

