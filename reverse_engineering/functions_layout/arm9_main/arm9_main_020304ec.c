
/* JUS-CLASS PropBindInstance_02095200_Derived_02095140::PropBindInstance_02095200_Derived_02095140
   [class-derived] stores vtable 02095140 into *this (constructor) */

undefined4 *
PropBindInstance_02095200_Derived_02095140::PropBindInstance_02095200_Derived_02095140
          (undefined4 *param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  PropBindInstance_02095200::PropBindInstance_02095200();
  *param_1 = &vftable;
  if (param_3 == 0) {
    param_1[8] = 0;
  }
  else {
    iVar1 = jus_AllocDebug(0x14);
    uVar2 = 0;
    if (iVar1 != 0) {
      uVar2 = jus_Class_02097b38::jus_Class_02097b38(iVar1,param_3,param_4);
    }
    param_1[8] = uVar2;
  }
  return param_1;
}

