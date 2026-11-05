
undefined4 FUN_020689b0(int param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = FUN_02054b44();
  lVar6 = lVar6 - *(longlong *)(param_1 + 0xcb0);
  uVar4 = (uint)lVar6;
  uVar7 = FUN_0200d0c4(uVar4 * 0x40,(int)((ulonglong)lVar6 >> 0x20) * 0x40 | uVar4 >> 0x1a,0x82ea,0)
  ;
  uVar4 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((uVar4 != 0 || uVar4 < (0x95 < (uint)uVar7)) ||
     (*(char *)(param_1 + (uint)*(byte *)(param_1 + 0xd0f) * 4 + 0x447) < '\0')) {
    pbVar5 = (byte *)(param_1 + 0xd0f);
    *(byte *)(param_1 + 0x447 + (uint)*pbVar5 * 4) =
         *(byte *)(param_1 + 0x447 + (uint)*pbVar5 * 4) | 0x80;
    uVar4 = (uint)*(byte *)(param_1 + 0xd12);
    uVar2 = (uint)*pbVar5;
    if (uVar2 < uVar4) {
      do {
        if (-1 < *(char *)(param_1 + uVar2 * 4 + 0x447)) break;
        *pbVar5 = *pbVar5 + 1;
        uVar4 = (uint)*(byte *)(param_1 + 0xd12);
        uVar2 = (uint)*(byte *)(param_1 + 0xd0f);
      } while (uVar2 < uVar4);
    }
    if (uVar4 <= uVar2) {
      *(undefined1 *)(param_1 + 0xd0f) = 0;
      uVar1 = FUN_0206882c(param_1,4);
      return uVar1;
    }
    uVar7 = FUN_02054b44();
    *(undefined8 *)(param_1 + 0xcb0) = uVar7;
    iVar3 = (uint)*(byte *)(param_1 + 0xd0f) * 0xc0;
    FUN_02068724(param_1 + 0x474 + iVar3,param_1 + 0x47c + iVar3,
                 *(ushort *)(param_1 + iVar3 + 0x4a6) - 1,0x300000);
  }
  return 4;
}

