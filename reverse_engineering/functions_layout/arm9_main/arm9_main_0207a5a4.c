
/* JUS-CLASS BattleProp_0209f8c4::vfunc_09 [class-virtual] slot 9 of vtable 0209f8c4 (own slot, not
   inherited) */

void BattleProp_0209f8c4::vfunc_09(int param_1,int param_2,undefined2 *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint extraout_r1;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  iVar5 = *(int *)(param_2 + 0x10);
  iVar4 = iVar5 + *(int *)(param_1 + 0x14) * 0x10;
  uVar1 = FUN_02011ac8(param_2);
  uVar3 = (uint)*(byte *)(iVar4 + 0xf);
  if (-1 < (char)*(byte *)(iVar4 + 0xf)) {
    FUN_02079dfc(iVar4,uVar1);
    uVar3 = extraout_r1;
  }
  *(undefined2 *)(iVar4 + 4) = *param_3;
  *(undefined2 *)(iVar4 + 6) = param_3[1];
  *(undefined2 *)(iVar4 + 8) = param_3[2];
  *(undefined2 *)(iVar4 + 10) = param_3[3];
  *(byte *)(iVar4 + 0xf) = *(byte *)(iVar4 + 0xf) | 0x40;
  bVar6 = *(char *)(iVar4 + 0xe) < '\0';
  uVar2 = 0;
  if (bVar6) {
    uVar3 = (uint)*(short *)(iVar4 + 0xc);
    uVar2 = 0xffffffff;
  }
  if (bVar6 && uVar3 != uVar2) {
    if (uVar2 == ((int)*(char *)(iVar4 + 0xf) << 0x1a) >> 0x1a) {
      FUN_0207a098(iVar5,iVar4,uVar1);
      return;
    }
    FUN_02079e40(iVar5,iVar4,uVar1);
    return;
  }
  return;
}

