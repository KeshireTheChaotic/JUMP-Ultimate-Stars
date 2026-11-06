
undefined4 FUN_02069014(int param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  
  iVar1 = func_0x021938c0();
  if (iVar1 == 0) {
    lVar3 = OS_GetTick();
    lVar3 = lVar3 - *(longlong *)(param_1 + 0xcb0);
    uVar2 = (uint)lVar3;
    uVar4 = FUN_0200d0c4(uVar2 * 0x40,(int)((ulonglong)lVar3 >> 0x20) * 0x40 | uVar2 >> 0x1a,
                         0x1ff6210,0);
    uVar2 = (uint)((ulonglong)uVar4 >> 0x20);
    if (uVar2 == 0 && (9 < (uint)uVar4) <= uVar2) {
      return 0xc;
    }
    *(undefined1 *)(param_1 + (uint)*(byte *)(param_1 + 0xd13) * 4 + 0x444) = 1;
    return 0xb;
  }
  FUN_02068dcc(param_1);
  if ((*(byte *)(param_1 + 0xd0c) & 0x3f) >> 4 == 1) {
    return 0xf;
  }
  return 0xd;
}

