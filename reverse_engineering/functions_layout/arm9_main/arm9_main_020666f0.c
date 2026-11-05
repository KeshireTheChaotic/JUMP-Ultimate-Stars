
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_020666f0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8,undefined4 *param_9)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 local_48;
  undefined4 local_40;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_2c;
  undefined4 local_24;
  
                    /* JUS-TAG hw={"GX_3D":2,"MATH_DIVSQRT":4}
                       io=["04000290","04000294","04000298","0400029c","04000440","04000458"] */
  FUN_02050864(param_4 - param_3);
  if (param_8 != 0) {
    _DAT_04000440 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    param_9[1] = 0;
    param_9[2] = 0;
    param_9[3] = 0;
    param_9[4] = 0;
    param_9[6] = 0;
    param_9[7] = 0;
    param_9[8] = 0;
    param_9[9] = 0;
    param_9[0xb] = 0;
    param_9[0xf] = param_7;
  }
  uVar5 = FUN_020508dc();
  _DAT_04000290 = 0;
  _DAT_04000294 = 0x1000;
  _DAT_04000298 = param_1 - param_2;
  _DAT_0400029c = 0;
  iVar4 = param_7 >> 0x1f;
  if (param_7 != 0x1000) {
    uVar5 = FUN_0200d10c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_7,iVar4);
    uVar5 = FUN_0200cf14((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x1000,0);
  }
  local_38 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_34 = (undefined4)uVar5;
  uVar1 = FUN_02050d80(0x2000,local_34,local_38);
  if (param_8 != 0) {
    _DAT_04000458 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    *param_9 = uVar1;
  }
  uVar5 = FUN_020508dc();
  _DAT_04000290 = 0;
  _DAT_04000294 = 0x1000;
  _DAT_04000298 = param_5 - param_6;
  _DAT_0400029c = 0;
  if (param_7 != 0x1000) {
    uVar5 = FUN_0200d10c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_7,iVar4);
    uVar5 = FUN_0200cf14((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x1000,0);
  }
  local_40 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_2c = (undefined4)uVar5;
  uVar1 = FUN_02050d80(0x2000,local_2c,local_40);
  if (param_8 != 0) {
    _DAT_04000458 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    param_9[5] = uVar1;
  }
  uVar5 = FUN_020508dc();
  if (param_7 != 0x1000) {
    uVar5 = FUN_0200d10c((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),param_7,iVar4);
    uVar5 = FUN_0200cf14((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),0x1000,0);
  }
  local_48 = (undefined4)((ulonglong)uVar5 >> 0x20);
  local_24 = (undefined4)uVar5;
  uVar1 = FUN_02050d80(0x2000,local_24,local_48);
  if (param_8 != 0) {
    _DAT_04000458 = 0;
  }
  if (param_9 != (undefined4 *)0x0) {
    param_9[10] = uVar1;
  }
  uVar1 = FUN_02050d80(-(param_4 + param_3),local_34,local_38);
  uVar2 = FUN_02050d80(-(param_1 + param_2),local_2c,local_40);
  uVar3 = FUN_02050d80(param_6 + param_5,local_24,local_48);
  if (param_8 != 0) {
    _DAT_04000458 = param_7;
  }
  if (param_9 != (undefined4 *)0x0) {
    param_9[0xc] = uVar1;
    param_9[0xd] = uVar2;
    param_9[0xe] = uVar3;
  }
  return;
}

