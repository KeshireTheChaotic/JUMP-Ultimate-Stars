
undefined4 FUN_02068ae8(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  lVar3 = OS_GetTick();
  lVar3 = lVar3 - *(longlong *)(param_1 + 0xcb0);
  uVar2 = (uint)lVar3;
  uVar4 = FUN_0200d0c4(uVar2 * 0x40,(int)((ulonglong)lVar3 >> 0x20) * 0x40 | uVar2 >> 0x1a,0x82ea,0)
  ;
  uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
  if (uVar2 != 0 || uVar2 < (299 < (uint)uVar4)) {
    *(char *)(param_1 + 0xd11) = *(char *)(param_1 + 0xd11) + '\x02';
    if ('\f' < *(char *)(param_1 + 0xd11)) {
      uVar1 = FUN_0206882c(param_1,3);
      return uVar1;
    }
    uVar4 = OS_GetTick();
    *(undefined8 *)(param_1 + 0xcb0) = uVar4;
    FUN_02068724(0x21a3630,0x21a3638,(int)*(char *)(param_1 + 0xd11),0x200000);
  }
  return 3;
}

