
undefined4 FUN_02177de8(void)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  bool bVar4;
  longlong lVar5;
  undefined8 uVar6;
  
  iVar1 = DAT_021a75a4;
  uVar3 = 0;
  lVar5 = OS_GetTick();
  lVar5 = lVar5 - *(longlong *)(iVar1 + 0xc);
  uVar2 = (uint)lVar5;
  uVar6 = FUN_0200d0c4(uVar2 * 0x40,(int)((ulonglong)lVar5 >> 0x20) * 0x40 | uVar2 >> 0x1a,0x82ea,0)
  ;
  uVar2 = (uint)((ulonglong)uVar6 >> 0x20);
  bVar4 = 299 < (uint)uVar6;
  if (uVar2 != 0 || uVar2 < bVar4) {
    *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    uVar3 = FUN_021823ac(*(undefined4 *)(DAT_021a75a4 + 4),uVar2 - !bVar4);
    uVar6 = OS_GetTick();
    *(undefined8 *)(DAT_021a75a4 + 0xc) = uVar6;
  }
  return uVar3;
}

