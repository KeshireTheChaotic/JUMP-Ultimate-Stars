
undefined8
FUN_02009314(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  if (((param_2 & 0x7fffffff) < 0x3e400000) && (iVar1 = FUN_0200b778(param_1,param_2), iVar1 == 0))
  {
    return CONCAT44(param_2,param_1);
  }
  uVar7 = FUN_0200b8cc(param_1,param_2,param_1,param_2);
  uVar4 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar2 = (undefined4)uVar7;
  uVar7 = FUN_0200b8cc(uVar2,uVar4,param_1,param_2);
  uVar5 = (undefined4)((ulonglong)uVar7 >> 0x20);
  uVar3 = (undefined4)uVar7;
  uVar7 = FUN_0200b8cc(0x5acfd57c,0x3de5d93a,uVar2,uVar4);
  uVar7 = FUN_0200b3a0(0x8a2b9ceb,0xbe5ae5e6,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b8cc(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b3a0(0x57b1fe7d,0x3ec71de3,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b8cc(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b3a0(0x19c161d5,0xbf2a01a0,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b8cc(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b3a0(0x1110f8a6,0x3f811111,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar6 = (undefined4)((ulonglong)uVar7 >> 0x20);
  if (param_5 == 0) {
    uVar7 = FUN_0200b8cc(uVar2,uVar4,(int)uVar7,uVar6);
    uVar7 = FUN_0200b3a0(0x55555549,0xbfc55555,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = FUN_0200b8cc(uVar3,uVar5,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    uVar7 = FUN_0200b3a0(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    return uVar7;
  }
  uVar8 = FUN_0200b8cc(0,0x3fe00000,param_3,param_4);
  uVar7 = FUN_0200b8cc(uVar3,uVar5,(int)uVar7,uVar6);
  uVar7 = FUN_0200bc6c((int)uVar8,(int)((ulonglong)uVar8 >> 0x20),(int)uVar7,
                       (int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200b8cc(uVar2,uVar4,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  uVar7 = FUN_0200bc6c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),param_3,param_4);
  uVar8 = FUN_0200b8cc(0x55555549,0xbfc55555,uVar3,uVar5);
  uVar7 = FUN_0200bc6c((int)uVar7,(int)((ulonglong)uVar7 >> 0x20),(int)uVar8,
                       (int)((ulonglong)uVar8 >> 0x20));
  uVar7 = FUN_0200bc6c(param_1,param_2,(int)uVar7,(int)((ulonglong)uVar7 >> 0x20));
  return uVar7;
}

