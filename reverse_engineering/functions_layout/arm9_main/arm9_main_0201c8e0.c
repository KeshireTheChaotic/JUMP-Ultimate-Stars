
/* JUS-CLASS jus_Class_02093eb4::jus_Class_02093eb4 [class-default] stores vtable 02093eb4 into
   *this (constructor) */

undefined4 *
jus_Class_02093eb4::jus_Class_02093eb4
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint local_20;
  uint local_1c [5];
  
  *param_1 = &vftable;
  local_1c[4] = param_4;
  iVar1 = FUN_0201a228(0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_1c[3] = 0x80000;
    uVar2 = jus_Class_02094370::jus_Class_02094370(iVar1,local_1c + 3);
  }
  param_1[1] = uVar2;
  iVar1 = FUN_0201a228(0x10);
  uVar2 = 0;
  if (iVar1 != 0) {
    local_1c[3] = 0x80000;
    uVar2 = jus_Class_02094370::jus_Class_02094370(iVar1,local_1c + 3);
  }
  param_1[2] = uVar2;
  local_1c[2] = 0;
  (**(code **)(*(int *)param_1[1] + 0x10))((int *)param_1[1],local_1c + 2);
  *(undefined4 *)(param_1[1] + 0xc) = param_1[2];
  *(undefined4 *)(param_1[1] + 8) = 0;
  local_1c[1] = 0xff000;
  (**(code **)(*(int *)param_1[2] + 0x10))((int *)param_1[2],local_1c + 1);
  *(undefined4 *)(param_1[2] + 0xc) = 0;
  *(undefined4 *)(param_1[2] + 8) = param_1[1];
  for (uVar3 = 0; uVar3 < 0x100; uVar3 = uVar3 + 1) {
    param_1[uVar3 + 3] = 0;
  }
  FUN_02011990(local_1c,param_1[1]);
  param_1[(local_1c[0] >> 0xc) + 3] = param_1[1];
  FUN_02011990(&local_20,param_1[2]);
  param_1[(local_20 >> 0xc) + 3] = param_1[2];
  param_1[0x103] = 0;
  return param_1;
}

