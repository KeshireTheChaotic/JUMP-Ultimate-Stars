
undefined8 FUN_0200892c(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  int local_28;
  
  uVar5 = param_2 & 0x7fffffff;
  if ((uVar5 < 0x3e400000) && (iVar1 = FUN_0200b778(param_1,param_2), iVar1 == 0)) {
    return 0x3ff0000000000000;
  }
  uVar6 = FUN_0200b8cc(param_1,param_2,param_1,param_2);
  uVar3 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar2 = (undefined4)uVar6;
  uVar6 = FUN_0200b8cc(0xbe8838d4,0xbda8fae9,uVar2,uVar3);
  uVar6 = FUN_0200b3a0(0xbdb4b1c4,0x3e21ee9e,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b3a0(0x809c52ad,0xbe927e4f,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b3a0(0x19cb1590,0x3efa01a0,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b3a0(0x16c15177,0xbf56c16c,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b3a0(0x5555554c,0x3fa55555,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
  uVar4 = (undefined4)((ulonglong)uVar6 >> 0x20);
  if (uVar5 < 0x3fd33333) {
    uVar7 = FUN_0200b8cc(0,0x3fe00000,uVar2,uVar3);
    uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,uVar4);
    uVar8 = FUN_0200b8cc(param_1,param_2,param_3,param_4);
    uVar6 = FUN_0200bc6c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar8,
                         (int)((ulonglong)uVar8 >> 0x20));
    uVar6 = FUN_0200bc6c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                         (int)((ulonglong)uVar6 >> 0x20));
    uVar6 = FUN_0200bc6c(0,0x3ff00000,(int)uVar6,(int)((ulonglong)uVar6 >> 0x20));
    return uVar6;
  }
  if (uVar5 < 0x3fe90001) {
    local_28 = uVar5 - 0x200000;
  }
  else {
    local_28 = 0x3fd20000;
  }
  uVar7 = FUN_0200b8cc(0,0x3fe00000,uVar2,uVar3);
  uVar7 = FUN_0200bc6c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),0,local_28);
  uVar8 = FUN_0200bc6c(0,0x3ff00000,0,local_28);
  uVar6 = FUN_0200b8cc(uVar2,uVar3,(int)uVar6,uVar4);
  uVar9 = FUN_0200b8cc(param_1,param_2,param_3,param_4);
  uVar6 = FUN_0200bc6c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),(int)uVar9,
                       (int)((ulonglong)uVar9 >> 0x20));
  uVar6 = FUN_0200bc6c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  uVar6 = FUN_0200bc6c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar6,
                       (int)((ulonglong)uVar6 >> 0x20));
  return uVar6;
}

