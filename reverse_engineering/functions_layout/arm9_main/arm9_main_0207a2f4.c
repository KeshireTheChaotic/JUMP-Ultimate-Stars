
/* JUS-CLASS BattleProp_0209f96c::vfunc_09 [class-virtual] slot 9 of vtable 0209f96c (own slot, not
   inherited) */

void BattleProp_0209f96c::vfunc_09(int param_1,int param_2,short *param_3,undefined4 param_4)

{
  byte bVar1;
  short sVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint extraout_r1;
  int iVar6;
  int iVar7;
  
  iVar7 = *(int *)(param_2 + 0x10);
  iVar6 = iVar7 + *(int *)(param_1 + 0x14) * 0x10;
  uVar3 = FUN_02011ac8(param_2);
  uVar5 = (uint)*(byte *)(iVar6 + 0xf);
  if (-1 < (char)*(byte *)(iVar6 + 0xf)) {
    FUN_02079dfc(iVar6,uVar3);
    uVar5 = extraout_r1;
  }
  sVar2 = *param_3;
  if ((int)*(short *)(iVar6 + 0xc) == (int)sVar2) {
    return;
  }
  bVar1 = *(byte *)(iVar6 + 0xe);
  uVar4 = (uint)bVar1 << 0x18;
  if ((char)bVar1 < '\0') {
    uVar4 = 0xffffffff;
    uVar5 = ((int)*(char *)(iVar6 + 0xf) << 0x1a) >> 0x1a;
  }
  if ((char)bVar1 < '\0' && uVar5 != uVar4) {
    FUN_02079f08(iVar7,iVar6,uVar3);
    sVar2 = *param_3;
    *(short *)(iVar6 + 0xc) = sVar2;
    FUN_0207a098(iVar7,iVar6,uVar3,(int)sVar2,param_4);
    return;
  }
  if (((char)bVar1 < '\0') && (((int)*(char *)(iVar6 + 0xf) << 0x1a) >> 0x1a == -1)) {
    *(short *)(iVar6 + 0xc) = sVar2;
    FUN_0207a098(iVar7,iVar6,uVar3,(int)sVar2,param_4);
    return;
  }
  *(short *)(iVar6 + 0xc) = sVar2;
  return;
}

