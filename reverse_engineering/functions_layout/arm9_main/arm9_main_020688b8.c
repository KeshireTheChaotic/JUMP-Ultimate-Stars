
undefined4 FUN_020688b8(int param_1)

{
  undefined1 uVar1;
  byte *pbVar2;
  undefined4 uVar3;
  char *pcVar4;
  uint uVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  lVar6 = OS_GetTick();
  lVar6 = lVar6 - *(longlong *)(param_1 + 0xcb0);
  uVar5 = (uint)lVar6;
  uVar7 = FUN_0200d0c4(uVar5 * 0x40,(int)((ulonglong)lVar6 >> 0x20) * 0x40 | uVar5 >> 0x1a,0x82ea,0)
  ;
  uVar5 = (uint)((ulonglong)uVar7 >> 0x20);
  if ((uVar5 != 0 || uVar5 < (0x95 < (uint)uVar7)) ||
     ((*(byte *)(param_1 + (uint)*(byte *)(param_1 + 0xd0f) * 0x24 + 0x300) & 0xf) == 1)) {
    pbVar2 = (byte *)(param_1 + 0xd0f);
    *(byte *)(param_1 + 0x300 + (uint)*pbVar2 * 0x24) =
         *(byte *)(param_1 + 0x300 + (uint)*pbVar2 * 0x24) & 0xf0;
    *pbVar2 = *pbVar2 + 1;
    if (*(byte *)(param_1 + 0xd10) <= *pbVar2) {
      pcVar4 = (char *)(param_1 + 0xd15);
      *pcVar4 = *pcVar4 + '\x01';
      *pbVar2 = 0;
      uVar1 = FUN_02068c80(*pcVar4);
      *(undefined1 *)(param_1 + 0xd11) = uVar1;
    }
    if (*(char *)(param_1 + 0xd11) < '\0') {
      *(undefined1 *)(param_1 + 0xd15) = 0;
      uVar3 = FUN_0206882c(param_1,5);
      return uVar3;
    }
    uVar7 = OS_GetTick();
    *(undefined8 *)(param_1 + 0xcb0) = uVar7;
    FUN_02068724(0x21a3630,param_1 + 0x304 + (uint)*(byte *)(param_1 + 0xd0f) * 0x24,
                 (int)*(char *)(param_1 + 0xd11),0x300000);
  }
  return 5;
}

