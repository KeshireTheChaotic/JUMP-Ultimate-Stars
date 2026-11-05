
/* JUS-CLASS BattleProp_0209fa18::vfunc_09 [class-virtual] slot 9 of vtable 0209fa18 (own slot, not
   inherited) */

void BattleProp_0209fa18::vfunc_09(int param_1,int param_2,ushort *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = *(int *)(param_2 + 0x10);
  iVar2 = iVar3 + *(int *)(param_1 + 0x14) * 0x10;
  iVar1 = FUN_02011ac8(param_2);
  if (-1 < *(char *)(iVar2 + 0xf)) {
    FUN_02079dfc(iVar2,iVar1);
  }
  (**(code **)(**(int **)(*(int *)(iVar1 + 4) + 0x68) + 0xa0))();
  if ((ushort)(*(byte *)(iVar2 + 0xe) >> 7) == *param_3) {
    return;
  }
  *(byte *)(iVar2 + 0xe) = *(byte *)(iVar2 + 0xe) & 0x7f | ((*param_3 & 1) != 0) << 7;
  if (*(short *)(iVar2 + 0xc) == -1) {
    return;
  }
  if ((*(byte *)(iVar2 + 0xf) & 0x7f) >> 6 == 0) {
    return;
  }
  if ((*(char *)(iVar2 + 0xe) < '\0') && (((int)*(char *)(iVar2 + 0xf) << 0x1a) >> 0x1a == -1)) {
    FUN_0207a098(iVar3,iVar2,iVar1);
    return;
  }
  if (((int)*(char *)(iVar2 + 0xf) << 0x1a) >> 0x1a == -1) {
    return;
  }
  FUN_02079f08(iVar3,iVar2,iVar1);
  return;
}

