
/* JUS-CLASS jus_Class_02093f78::jus_Class_02093f78 [class-default] stores vtable 02093f78 into
   *this (constructor) */

undefined4 *
jus_Class_02093f78::jus_Class_02093f78(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 local_40 [11];
  
  jus_Class_02093ff0::jus_Class_02093ff0();
  *param_1 = &vftable;
  iVar7 = 2;
  puVar1 = &DAT_0208dc80;
  puVar2 = local_40;
  do {
    puVar8 = puVar2;
    puVar6 = puVar1;
    uVar3 = puVar6[1];
    uVar4 = puVar6[2];
    uVar5 = puVar6[3];
    *puVar8 = *puVar6;
    puVar8[1] = uVar3;
    puVar8[2] = uVar4;
    puVar8[3] = uVar5;
    iVar7 = iVar7 + -1;
    puVar1 = puVar6 + 4;
    puVar2 = puVar8 + 4;
  } while (iVar7 != 0);
  uVar3 = puVar6[5];
  uVar4 = puVar6[6];
  puVar8[4] = puVar6[4];
  puVar8[5] = uVar3;
  puVar8[6] = uVar4;
  local_40[0] = param_3;
  local_40[9] = param_2;
  if ((uint)param_1[3] < 0x2c) {
    uVar3 = param_1[2];
    iVar7 = FUN_0201a9ec(uVar3);
    if (iVar7 == 0) {
      FUN_0201a958(uVar3,1);
    }
    uVar3 = jus_AllocDebug(0x2c);
    param_1[2] = uVar3;
    param_1[3] = 0x2c;
  }
  param_1[4] = 0x2c;
  FUN_02051890(local_40,param_1[2]);
  return param_1;
}

